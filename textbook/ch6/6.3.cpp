#include <iostream>

unsigned fact(unsigned i);

int main()
{
	unsigned v;
	while (std::cin >> v)
	{
		std::cout << "fact(" << v << ") = " << fact(v) << std::endl;	
	
	}

	std::cout << "Bye!\n";
	return 0;


}

unsigned fact(unsigned i)
{
	unsigned result = 1;
	if (i != 0) {
		while (i >= 1)
			result *= i--;
	} else
		result = 0;
	return result;
}
