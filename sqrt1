\\ https://sametwice.com/forth
\\ calculate square root in forth
\\ Here's my version of sqrt. This is as simple as I could make the Newton Method for finding the square root. 
\\ It gives great results for any input > 0. It's pretty fast. 
\\ It takes about 20 iterations when the numbers get up to around 2 billion.


================================

: /-test -1 2 / abort" 
This implementation of SQRT requires that dividing by two makes all numbers closer to zero. 
Try replacing the '2 /' in sqrt-closer with 'S>D 2 SM/REM NIP'" ; /-test

: sqrt-closer ( square guess -- square guess adjustment) 2dup / over - 2 / ;
: sqrt ( square -- root ) 1 begin sqrt-closer dup while + repeat drop nip ;

: sqrt-test 2000000000 1 do i dup . sqrt . cr i 100 / 1+ +loop ;

=================================


\\ I think the RetroForth version would be something like this:

: sqrt-closer 2dup / over - 2 / ;
: sqrt-loop sqrt-closer 0; + sqrt-loop ;
: sqrt 1 sqrt-loop nip ;




===============================
