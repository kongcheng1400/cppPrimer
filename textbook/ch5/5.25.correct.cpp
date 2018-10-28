#include<iostream>
#include <stdexcept>


int main()
{
	int a, b;
	std::cout << "Please two integers: ";
	while (std::cin >> a >> b)
	{
		try {
			if (b == 0) throw std::runtime_error("divisor is 0");
			std::cout << static_cast<double>(a)/b << std::endl;
			std::cout << "Input two integers: ";
		
		
		} catch (std::runtime_error err) {
		
			std::cout << err.what();
			std::cout << "\nTry Again? Enter y or n:" << std::endl;
			char c;
			std::cin >> c;
			if (!std::cin || c == 'n')
				break;

			while (std::cin.get() != '\n')
				;
		}
	
	}
	return 0;
}
