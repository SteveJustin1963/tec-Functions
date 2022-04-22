# tec-Functions
Sine 


function for the tec-1

### tanh(x).
crude integer approximation of tanh(x). The graphs are actually pretty close.
: tanh ( n1--n2 ) dup 82 < if 85 * 100 / else 25 * 100 / 51 + then 99 min -99 max ;
