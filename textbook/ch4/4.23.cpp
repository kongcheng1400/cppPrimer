#include<iostream>


int main()
{
	using std::string;
	string s = "word";
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
	return 0;
}
