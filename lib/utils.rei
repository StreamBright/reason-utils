let range : start::int => step::int => stop::int => list int;
let reduce_list_int : function::(int => int => int) => list::list int => acc::int => int;
let string_of_list_int : list int => string;
let last : list::list 'a => option 'a;