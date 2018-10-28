#include <iostream>

void swap(int &, int &);


int main()
{
	int i = 3, j = 5;
	std::cout << "initial value : i = " << i << " , j = " << j << std::endl;
	swap(i, j);
	std::cout << "after swapped : i = " << i << " , j = " << j << std::endl;
	std::cout << "Bye!\n";

	return 0;

}

void swap(int & i, int & j)
{
	int tmp = j;
	j = i;
	i = tmp;
}
