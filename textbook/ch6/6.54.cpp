#include <iostream>
#include <vector>
int func(int, int);
int fPlus(int, int);
int fMinus(int, int);
int fMul(int, int);
int fDiv(int, int);

int main()
{
	std::vector<int (*)(int, int)> v1;
	v1.push_back(fPlus);
	v1.push_back(fMinus);
	v1.push_back(fMul);
	v1.push_back(fDiv);
	
	int a = 12, b = 2;
	std::cout << "fPlus = " << v1[0](a, b) << std::endl;



	return 0;
}

int fPlus(int a, int b)
{
	return a * b;
}

int fMinus(int a, int b)
{
	return a - b;
}

int fMul(int a, int b)
{
	return a * b;
}

int fDiv(int a, int b)
{
	return a / b;
}
