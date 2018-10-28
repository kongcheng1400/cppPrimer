#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> vstr;
	std::string tmpStr;
	std::cout << "Please input some words:\n";
	while (std::cin >> tmpStr)
		vstr.push_back(tmpStr);

	//processing.
	unsigned cnt = 0;
	std::string maxStr;
	for (auto iter = vstr.begin(); iter != vstr.end(); ++iter)
	{
		unsigned tmpCnt = 0;
		auto iter1 = iter + 1;
		while (iter1 != vstr.end() && *iter == *iter1) {
			++tmpCnt;
			++iter1;
		}
		if (tmpCnt > cnt) 
		{
			cnt = tmpCnt;
			maxStr = *iter;
		}
	}

	std::cout << maxStr << " has " << cnt << " times!" << std::endl;
	std::cout << "Bye!\n";

}
