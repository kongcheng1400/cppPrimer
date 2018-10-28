#include <iostream>
#include <string>
#include <cctype>
int main()
{
	std::string str;
	int cntVowel = 0;
	int cntSpace = 0;
	int cntTab = 0;
	int cntNewLine = 0;
	int otherChar = 0;
	const std::string strAOEIU = "aoeiu";
	std::cout << "Please input a line: ";
	while (std::getline(std::cin, str))
	{
		for (const char ch : str)
		{
			switch(ch) {
				case 'a' : case 'o' : case 'e' : case 'i' : case 'u' :
				case 'A' : case 'O' : case 'E' : case 'I' : case 'U' :
					cntVowel++;
					break;
				case ' ' :
					cntSpace++;
					break;
				case '\n':
					cntNewLine++;
					break;
				case '\t':
					cntTab++;
					break;
				default:
					otherChar++;
			
			}
		}

		std::cout << cntVowel << " vowels," << cntSpace << " spaces, " 
				  << cntTab << "  Tabs, " << cntNewLine << " newlines, "
				  << " in the line.\n";
		cntVowel = 0;
		cntSpace = 0;
		cntTab = 0;
		cntNewLine = 0;
		otherChar = 0;
		std::cout << "Please input another line: ";
	
	}

	std::cout << "Bye!\n";
	return 0;
}
