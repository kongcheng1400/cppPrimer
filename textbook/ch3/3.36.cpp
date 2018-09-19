#include <iostream>
#include <vector>

bool arrEqual(int a[], int b[], std::size_t sz);

int main()
{
	constexpr std::size_t SIZE = 5;
	int a[SIZE] = {0, 2, 4, 6, 8};
    int b[SIZE] = {0, 1, 3, 5, 7};

	std::cout << "a == b is ";  
	arrEqual(a, b, SIZE) ? std::cout << " True " : std::cout << " False ";
	std::cout << std::endl;

	std::vector<int> va(10, 2);
	std::vector<int> vb(10, 1);

	std::cout << "va == vb is " << (va == vb ? "True" : "False");
	std::cout << std::endl;	



	return 0;
}


bool arrEqual(int a[], int b[], std::size_t sz)
{
	bool result = true;
	for (std::size_t i = 0; i < sz; ++i)
		if (a[i] != b[i])
			result = false;

	return result;


}

