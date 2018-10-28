#include <iostream>

void swap(int *, int *);

int main()
{
	int i = 3, j = 5;
	std::cout << "i = " << i << " , j = " << j << std::endl;
	swap(&i, &j);
	std::cout << "after swap:" << std::endl;
	std::cout << "i = " << i << " , j = " << j << std::endl;
	std::cout << "Bye\n";

	return 0;
}


void swap(int *p, int *q)
{
	int temp = *q;
	*q = *p;
	*p = temp;
}
