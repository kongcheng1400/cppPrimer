# ++c, c++
prefix: c += 1; the expression value is the new c
suffix: store the c value c+= 1; the expression value is the old c.

# 4.18
will miss the first element.

# 4.19
```c++
ptr != 0 && *ptr++; //ptr is not empty and the element is not 0
ival++ && ival;//ival != 0. only one is ok.
vec[ival++] <= vec[ival]; //vec[++ival] <= vec[ival]
```


# 4.20
```c++
*iter++;//illegal.
//( *iter)++; //illegal
*iter.empty(); //illegal
iter->empty(); //legal
++*iter; //illegal
iter++->empty();//legal
```

# 4.25
'q'<< 6: change char to 32 bit int:
0x00000071=>0x00001c40=>7232


# 4.27
unsgined long u11 = 3, u12 = 7;
u11 & u12 = 0011 & 0111 = 0100 = 4
u11 | u12 = 0011 | 0111 = 0111 = 7
u11 && u12 = 1 true
u11 || u12 = 1 true
