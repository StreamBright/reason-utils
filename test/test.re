
let test () => {
  /* Step 1,2,3,4 */
  print_endline "Testing stepping:";
  assert (Lib.Utils.range start::0 step::1 stop::10 == [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]);
  assert (Lib.Utils.range start::0 step::2 stop::10 == [0, 2, 4, 6, 8]);
  assert (Lib.Utils.range start::0 step::3 stop::10 == [0, 3, 6, 9]);
  assert (Lib.Utils.range start::0 step::4 stop::10 == [0, 4, 8]);
  print_endline "OK";
  /* Step > stop, returns start (inclusive) */
  print_endline "Testing step > stop:"; 
  assert (Lib.Utils.range start::0 step::11 stop::10 == [0]);
  print_endline "OK";
  /* All 0 */
  print_endline "Testing all zero:";    
  assert (Lib.Utils.range start::0 step::0 stop::0 == []);
  print_endline "OK";
  /* Negative start */
  print_endline "Testing negative start:";      
  assert (Lib.Utils.range start::(-5) step::1 stop::6 == [-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5]);
  print_endline "OK";
  /* Negative step, reversed direction */
  print_endline "Testing negative step";      
  assert (Lib.Utils.range start::10 step::(-1) stop::0 == [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]);
  print_endline "OK";
   /* Negative step, negative stop */
  print_endline "Testing negative step, negative stop";
  assert (Lib.Utils.range start::5 step::(-1) stop::(-6) == [5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5]);
  print_endline "OK";
};

test();
