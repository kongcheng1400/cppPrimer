#include <iostream>
#include <vector>

int main()
{
	constexpr int SZ = 20;
	std::vector<int> ivec(SZ);
	std::vector<int>::size_type cnt = ivec.size();

	for (std::vector<int>::size_type ix = 0;
			ix != ivec.size(); ++ix, --cnt)
		ivec[ix] = cnt;


	for (int x : ivec)
		std::cout << x << " ";
	std::cout << std::endl;


	for (std::vector<int>::size_type ix = 0, cnt = ivec.size(); ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;
	std::cout << "Suffix:\n";
	for (int x : ivec)
		std::cout << x << " ";
	std::cout << std::endl;

	std::cout << "Bye!\n";
	return 0;
}
