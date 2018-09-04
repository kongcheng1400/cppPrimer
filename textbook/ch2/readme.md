#ch2



## 2.4.2
## 2.27
>(a) int i = -1, & r = 0;
- r is illegal. r need to refer a object.
>(b) int * const p2 = &i2;
- ok.
>(c): const int i = -1, &r = 0;
- **legal**
>(d) const int * const p3 = &i2; 
- a const pointer points to const int, i2 needs to be a const.
- **legal**
>(e) const int *p1 = &i2;
- ok.
>(f) const int & const r2;
- r2 needs to be initialized.
- **corrected: r2 is a reference that cannot be const. reference is not an object.**
>(g) const int i2 = i, &r = i;
-legal 

### 2.28
> (a) int i, * const cp;
- illegal. a const pointer needs to be initialized. 
> (b) int * p1, * const p2;
- illegal, p2 is a const pointer, need to be initialized
> (c) const int ic, &r = ic;
- legal.
- **ic must initialize**
> (d) const int * const p3; 
- p3 is a const pointer which points to a const value, needs to be initialized.
> (e) const int * p;
- correct.


### 2.29
```c++
i = ic; //legal
p1 = p3; //illegal . p3 is a pointer to const
p1 = & ic; //illegal. ic is a const object, can only pointed by a pointer to const
p3 = & ic; //ilegal
p2 = p1; // p2 is a const pointer, cannt assign
ic = * p3; //ilegal.ic is a const int.

```

### 2.30
```C++
const int v2 = 0; //top level const
int v1 = v2; //non const
int * p1 = &v1, &r1 = v1; //non const
const int * p2 = v2, * const p3 = &i, &r2 = v2; //p2 is low level, p3 is high level, r2 is illegal
// **r2 is legal. and r2 is low level const. p3 is high level and low level**

```
### 2.31
```c++
r1 = v2; //illegal 
p1 = p2; //illegal
p2 = p1; //legal
p1 = p3; //legal **illegal**
p2 = p3; //legal 

```


