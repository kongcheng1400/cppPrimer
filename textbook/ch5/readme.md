#5.13
a
```c++
unsigned aCnt = 0, eCan = 0, iouCnt = 0;
char ch = next_text();
siwtch (ch) 
{
	case 'a': aCnt++; //need break
	case 'e': ecnt++;//need break
	default: iouCnt++;//need break
}

```

b 
```c++
unsgined idnex = some_value();
switch (index) {
	case 1:
		int ix = get_value();
		ivec[ix] = index;
		break;	

	default:
		ix = ivec.size() - 1;//can'tuse ix here
		ivec[ix] = index;

}

```

c
```c++
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit)
{
	case 1: case 3: case 5: case 7: case 9:
		oddcnt++;
		break;
	case 2: case 4: case 6: case 8: case 10:
		evencnt++;
		break;
	default:
		break;
}
```


d.
Error: use const expr for case label:
```c++
unsigned ival = 512, jval = 1024, kval = 4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
siwch(swt) {
	case ival:
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = jval * sizeof(int);
		break;
	case kval:
		bufsize = kval * sizeof(int);
		break;
	default:
		break;


}
```



## 5.15
```c++
(a): error: ix only in for range.
for (int ix = 0; ix != sz; ++ix) {/*..*/}
if (ix != sz)
	//
(b): error: no init statement.
for (ix != sz ; ++ ix) {}

(c): always in for.logic error
	



```

5.18
```c++
(a) error: no { } for the block.
(b) cannot define variable in the while condition.
(c) ok?



```





















