#include <iostream>
#include <initializer_list>


int calc(std::initializer_list<int>);


int main()
{
	std::cout << "result is " << calc({0,1,2,3,4,5}) << std::endl;

	return 0;
}


int calc(std::initializer_list<int> il)
{
	int result = 0;
	for (auto it = il.begin(); it != il.end(); ++it)
		result += *it;


	return result;


}
