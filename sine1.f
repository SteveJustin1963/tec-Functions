
\\ convert to forth 83

: f ( x -- f(x) )
  dup abs 1- * ;

: print-f ( x -- )
  -10 10 do
    i 10 / f .
  loop ;
