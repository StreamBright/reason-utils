let main () => 
  print_endline {|
    utils.re has the following so far:
      range:
        range start::0 step::4 stop::10;
        - : list int = [0, 4, 8]
      
      reduce_list_int:
        reduce_list_int function::(*) list::(range 1 1 8) acc::1;
        - : int = 5040
        reduce_list_int function::(+) list::(range 1 1 8) acc::0;
        - : int = 28
        
      string_of_list_int:
        string_of_list_int (range 0 1 10);
        - : string = "[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]"
      
      last:
        last (range 0 1 5);
        - : option int = Some 4
  |};
