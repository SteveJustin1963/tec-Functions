# tec-Functions

draft, convert entries to MINT


### Sine 
\\ x in [-1,1]
```
fakeSin(x) = x (1 - abs(x))
```
### Cosine


### tanh(x)

crude integer approximation of tanh(x). The graphs are actually pretty close.
```
: tanh ( n1--n2 ) dup 82 < if 85 * 100 / else 25 * 100 / 51 + then 99 min -99 max ;

a := if a<82 then 85a/100 else 25a/100+51;
a := limit a, -99..99;
```

### random
- https://github.com/SteveJustin1963/tec-RANDOM

```
:A 7 x@ * 3 + " x! 32555 > (`_`)(`|`);
:B 10000(A);
```

### sqrt

- https://en.wikipedia.org/wiki/Integer_square_root

### X!

### ABS

### Hyp

### Pi, e, 




