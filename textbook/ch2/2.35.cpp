#include <iostream>

int main()
{
	const int i = 42;
	auto j = i;
	const auto & k = i;
	auto * p = &i;
	const auto j2 = i, &k2 = i;

	std::cout << "i = " << i << " ,j = " << j
			  << " ,k = " << k << " ,p = " << p
			  << " ,j2= " << j2 << " ,k2 = " << k2 << std::endl;

	return 0;
}
