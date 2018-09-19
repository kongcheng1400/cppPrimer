#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

void showVector(const std::vector<int>  & civ);

int main()
{
	std::srand(std::time(0));
	constexpr int LEN = 50;
	std::vector<int> gradeVec(LEN);
	
	//fill the vector with random number:
	for (int & i : gradeVec)
		i = std::rand() % 100;

	showVector(gradeVec);

	return 0;

		

}


void showVector(const std::vector<int> & civ)
{
	for (const int & i :  civ)
		std::cout << i << ": " << ( i> 90 ? "high pass!" : i > 75 ? "pass!" : i > 60 ? "low pass!" : " fail!")
				  << "\n";

	std::cout << std::endl;

}
