#include <iostream>
#include <iomanip>
#include <climits>

int main()
{
	constexpr char c = 'q';
	std::cout << std::showbase << std::hex << "INT_MAX = " << INT_MAX
			  << "\nq = " << (int)c << std::endl;
	std::cout << " 'q' << 6 = " << (c << 6) << "\n";


	return 0;
}
