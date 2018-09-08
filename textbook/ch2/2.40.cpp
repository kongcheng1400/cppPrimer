#include "2.40.h"

void Sales_data::init()
{
	std::cout << "Please input the ISBN string: ";
	while (!(std::getline(std::cin, isbn_m)))
	{
		std::cin.clear();
		while(std::cin.get() != '\n')
			continue;
		std::cout << "illegal input, please input again: ";
	}

	std::cout << "Please input the sales value: ";
	while (!(std::cin >> sales_m))
	{
		std::cin.clear();
		while(std::cin.get() != '\n')
			continue;
		std::cout << "illegal input, please input again: ";
	}

	std::cout << "Please intput the qty of books saled: ";
	while (!(std::cin >> qty_m))
	{
		std::cin.clear();
		while(std::cin.get() != '\n')
			continue;
		std::cout << "illegal input, please input again: ";
	}

	std::cin.get();

}

std::ostream & operator<<(std::ostream & out, const Sales_data & sd)
{
	out << sd.isbn_m << " " << sd.sales_m << " " << sd.qty_m << std::endl;
	return out;
}
