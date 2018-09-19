#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	const char ca[] = {'H', 'E', 'L', 'L', 'O'};
	const char * cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}


	return 0;

}
