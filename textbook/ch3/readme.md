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

