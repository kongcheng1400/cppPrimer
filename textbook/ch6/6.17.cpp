#include <iostream>
#include <string>
#include <cctype>

using std::string;

bool hasUpper(const string &);
std::string & changeToLower(string &);


int main()
{
	string s1;
	std::cout << "Please input a string:";
	while (std::cin >> s1) {
		std::cout << "\"" << s1 << "\"" << " has upper: " << std::boolalpha 
				  << hasUpper(s1) << " , to lower " << changeToLower(s1) << std::endl;
		std::cout << "Please input a string:";
	}
	std::cout << "Bye!\n";
	
	
	return 0;


}


bool hasUpper(const string & str)
{
	bool result = false;
	
	auto iter = str.begin();
	while (iter != str.end() && std::isupper(*iter++))
		continue;
	if (iter != str.end())
		result = true;
	return result;
}

std::string & changeToLower(string & str)
{
	for (char & ch : str)
		ch = std::tolower(ch);

	return str;
}
