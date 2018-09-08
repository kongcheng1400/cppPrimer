#include <iostream>
#include <string>
#include <vector>


int main()
{
	using std::vector;
	using std::string;
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	std::vector<int> v4{10};
	std::vector<int> v5{10, 42};

	std::vector<vector<int> > vvi;
	vvi.push_back(v1);
	vvi.push_back(v2);
	vvi.push_back(v3);
	vvi.push_back(v4);
	vvi.push_back(v5);

	int temp = 0;
	std::cout << "vvi: element length and content: \n";
	for (auto v : vvi)
	{
		temp++;
		std::cout << "v" << temp << " is below: \n";
		std::vector<int>::size_type len = v.size();
		std::cout << "len = " << len << ", ";
		if (len != 0)
			for (auto e : v)
				std::cout << e << " ";

		std::cout << std::endl;

			
	}


	std::vector<string> v6{6};
	std::vector<string> v7{10, "hi"};
	std::vector<std::vector<string> > vvs;
	vvs.push_back(v6);
	vvs.push_back(v7);

	temp = 6;
	std::cout << "vvs: element length and content: \n";
	for (auto v : vvs)
	{
		temp++;
		std::cout << "v" << temp << " is below: \n";
		int len = v.size();
		std::cout << "len = " << len << ", ";
		if (len != 0)
			for (auto e : v)
				std::cout << e << " ";

		std::cout << std::endl;

			
	}

	return 0;
}
