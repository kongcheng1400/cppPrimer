#include <iostream>

void swapPointer(int ** p1, int ** p2);


int main()
{
	int i = 0, j = 0;
	std::cout << "Please input two integer:";
	int *p = &i, *q = &j;
	while (std::cin >> i >> j)
	{
		std::cout << "before swap: *p = " << *p << " , *q = " << *q << std::endl;
		swapPointer(&p, &q);
		std::cout << "after swap: *p = " << *p << " , *q = " << *q << std::endl;
		std::cout << "Please input two integer: ";
	
	}

	std::cout << "Bye!\n";
	return 0;
}


void swapPointer(int ** p1, int ** p2)
{
	int *pTmp = *p2;
	*p2 = *p1;
	*p1 = pTmp;

}
