int ival = 1.01; //ok
int & raval1 = 1.01; //reference can only refer variable.
int & ravl2 = ival; //ok
int & rval3 ; //incorrect. reference has to refer a variable.

int i = 0, & r1 = i; //ok
double d = 0; & r2 = d; //ok

r2 = 3.14159; //ok.
r2 = r1; //nok. can't assign a reference to a reference.
i = r2; //refrence is not an object.
r1 = d; //ok.

