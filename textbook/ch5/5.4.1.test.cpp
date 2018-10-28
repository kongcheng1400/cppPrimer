#include <iostream>
#include <string>

int main ()
{
	std::string str, preStr, maxStr;
	unsigned cnt = 0, tmpCnt = 0;
	std::cout << "Please input some words:";
	while (std::cin >> str)
	{
		if (str == preStr)
		{
			tmpCnt++;

		} else
		{
			if (tmpCnt > cnt) {
				cnt = tmpCnt;
				maxStr = preStr;
			}
			tmpCnt = 0;
			preStr = str;
		}
	
	
	}
	std::cout << "\n" << maxStr << " has " << cnt + 1 << " times!\n";

	std::cout << "Bye!\n";


}
