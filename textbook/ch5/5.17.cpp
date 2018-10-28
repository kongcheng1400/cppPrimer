#include <iostream>
#include <vector>

bool prefixTest(const std::vector<int> &, const std::vector<int> &);
int main()
{
	std::vector<int> v1 = {0, 1, 2, 3, 4, 5};
	std::vector<int> v2 = {0, 2, 3, 4};
	std::vector<int> v3 = {0, 1, 2};

	std::cout << std::boolalpha << "v1 v2 " << prefixTest(v1, v2) << std::endl;
	std::cout << "v1 v3 " << prefixTest(v1, v3) << std::endl;
	std::cout << "Bye!\n";
	return 0;




}

bool prefixTest(const std::vector<int> & v1, const std::vector<int> & v2)
{
	bool result = true;
	if (v1.size() > v2.size())
	{
		for (std::vector<int>::size_type i = 0; i < v2.size(); ++i)
			if (v2[i] != v1[i])
				result = false;	
	
	}
	else
	{
		for (std::vector<int>::size_type i = 0; i < v1.size(); ++i)
		   if (v1[i] != v2[i])
				result = false;	   
	}

	return result;

}
