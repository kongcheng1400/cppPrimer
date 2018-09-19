# CH3 answers

## the difference of input operator and getline for string class about space
> for input:ignore the space before the first alphabet, read the letters until first space, and leave the space int he buffer
> getline: read all letters in clude the space until first new line, and drop the new line.


## 3.9
```C++
string s;
cout << s[0] << endl; \\illegal, out of index
```
## 3.11
```c++
const string s = "Keep out!";
for (auto &c : s) {};
```

> illegal. need to add const
> **correction**. legal, c is char


## 3.12
```c++
vector<vector<int> > ivec; //legal 
vector<string> svec = ivec; //illegal
vector<string> svec(10, "null"); //legal

```

## 3.13
```C++
vector<int> v1; // 0 
vector<int> v2(10); //ten 0
vecotr<int> v3(10, 42); // ten 42
vector<int> v4{10}; //one 10
vector<int> v5{10, 42}; //two elements
vector<string> v6{10}; // 10 elements
vector<string> v7{10, "hi"}; //10 hi

```


## 3.18
```c++
vector<int> ivec;
ivec[0] = 42;
// ivec.push_back(42);
```
## 3.19
> std::vector<int> vi(10, 42);
> std::vector<int> vi{42, 42, 42,42, 42, 42, 42, 42, 42, 42};

## 3.27
```c++
unsigned buf_size = 1024;
(a) int ia[buf_size]; //illegal. need const expression
(b) int ia[4 & 7 -14]; //legal
(c) int ia[text_size()]; //illegal
(d) char st[11] = "fundamental"; //illegal

```
## 3.28
```C++
string sa[10]; //array of 10 empty strings
int ia[10];// array of 10 int of 0
int main() 
{

	string sa2[10]; //10 empty strings;
	int ia2[10]; //undefined value
}
```
## 3.29 compare array and vector
```
vector is STL, has many stl style. daynamic size.
arrays is fixed size.
```

## 3.30
```c++
constexpr size_t array_size = 10;
int ia [array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
	ia[ix] = ix;
//for (size_t ix = 0; ix < array_size; ++ix)

```

## 3.34
p1 += p2 - p1;
// p1 adds the distance between p2 and p1, p1 gets p2.













