//2.27
int i = -1, &r = 0; //nok. should refer to a variable.
int * const p2 = &i2; //it's ok if i2 is not a const.
const int i = -1, &r = 0; //not correct. const only apply the first variable
const in * const p3 = &i2; //i2 should be a const value.
const int * p1 = &i2; //ok
const int & const r2; //should initialize
const int i2 = i, &r = i; //nok should const int i2 = i, const &r = i;

