#include <iostream>

void reset(int &);

int main()
{
	int i = 4;
	std::cout << "initial value i = " << i << std::endl;
	reset(i);
	std::cout << "after reset: i = " << i << std::endl;

	std::cout << "Bye!\n";
	return 0;


}

void reset(int & i)
{

	i = 0;
}
