# tec-Functions

### Sine 
\\ x in [-1,1]
```
fakeSin(x) = x (1 - abs(x))
```


### tanh(x)
crude integer approximation of tanh(x). The graphs are actually pretty close.
```: tanh ( n1--n2 ) dup 82 < if 85 * 100 / else 25 * 100 / 51 + then 99 min -99 max ;

a := if a<82 then 85a/100 else 25a/100+51;
a := limit a, -99..99;
```
