#ch2



## 2.4.2
## 2.27
>(a) int i = -1, & r = 0;
- r is illegal. r need to refer a variable.
>(b) int * const p2 = &i2;
- ok.
>(c): const int i = -1, &r = 0;
- cannt refer to a literal
>(d) const int * const p3 = &i2; 
- a const pointer points to const int, i2 needs to be a const.
>(e) const int *p1 = &i2;
- ok.
>(f) const int & const r2;
- r2 needs to be initialized.
>(g) const int i2 = i, &r = i;
- r needs a const , first const cant restirct r.

### 2.28
> (a) int i, * const cp;
- a const pointer needs to be initialized
> (b) int * p1, * const p2;
- p2 is a const pointer, need to be initialized
> (c) const int ic, &r = ic;
-  r refers to a const value, should be a" const & r;"
> (d) const int * const p3; 
- p3 is a const pointer which points to a const value, needs to be initialized.
> (e) const int * p;
- correct.
