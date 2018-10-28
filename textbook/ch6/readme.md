# 6.2
(a) error: return value doesnot match the int
(b) error: doesnot define returl value
(c) parameter cannot have same name
(d) no body


# 6.16
use const string & for the parameter.

# 6.18
(a) bool compare(const matrix &, const matrix &);
(b) vector<int>::iterator  change_val(int a, const vector<int>::iterator  it);

# 6.19
```c++
double calc(double);
int count(const string &, char);
int sum(vecotr<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);

(a) calc(23.4, 55.1); //illegal
(b) count("abcda", 'a'); //legal
(c) calc(66); //legal
(d) sum(vec.begin(), vec.end(), 3.8); //legal


```

# 6.28
const string &

# 6.29
avoid copy variable

# 6.32
```
int & get(int *array, int index) { return arry[index];} //legal
//legal

```
# 6.36
string (&func())[10];
# 6.37
type alias:
typedef string str10[10];
using str10 = string[10];
str10 & func();
auto func() -> string (&)[10]
decltype(str10) & func();

# 6.38
# 6.54
int func(int, int);
std::vector<int (*)(int, int)>







