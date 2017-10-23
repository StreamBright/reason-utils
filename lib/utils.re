/* 
Returns a list of integers from start (inclusive) to end
  (exclusive), by step, where start defaults to 0, step to 1,
  and end must be passed in. When start is equal to end, 
  returns empty list, same for step being negative or zero.
*/
let range ::start ::step ::stop => {
  let rec aux start step stop acc =>
    switch (start, step, stop, acc) {
    | (_,step,_,_)              when step <= 0      => []
    | (start, _, stop, acc)     when start == stop  => List.rev acc
    | (start, _, stop, acc)     when start > stop   => List.rev acc
    | (start, step, stop, acc)                      => aux (start + step) step stop [start, ...acc]
    };
  switch step {
    | step when step > 0 => aux start step stop []
    | step               => List.rev (aux (stop + 1) (abs step) (start + 1) [])
  };
};

 /* Takes a function f and a list l and a accumulator acc 
and returns an int (right fold) */
let rec reduce_list_int function::f list::(l: list int) acc::(acc: int) =>
switch l {
	| [] => acc
	| [hd, ...tl] => f hd (reduce_list_int function::f list::tl acc::acc)
};

/* Converts a list int to string */
let string_of_list_int (l: list int) => {
  let rec string_of_list_int_aux (l: list int) =>
    switch l {
    | [] => ""
    | [one] => string_of_int one
    | [hd, ...tl] => string_of_int hd ^ ", " ^ string_of_list_int_aux tl
    };
  "[" ^ (string_of_list_int_aux l) ^ "]"
};

/* Returns the last element of a list */
let last ::list =>
  switch list {
  | [] => None
  | l => Some (List.hd (List.rev list))
};

/* 
	List.fold_left (+) 0 (range 1000);
	List.fold_right (+) (range 1000) 0;
*/