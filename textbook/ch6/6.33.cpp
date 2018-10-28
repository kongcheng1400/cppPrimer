#include <iostream>
#include <vector>


void recursivePrint(const std::vector<int> &, std::vector<int>::iterator );

int main()
{
	std::vector<int> vi {1,2,3,4,5,6,8};
	recursivePrint(vi, vi.begin());
	std::cout << std::endl;
	return 0;

}


void recursivePrint(const std::vector<int> & vi,
	   	std::vector<int>::iterator  iter)
{
	std::cout << *iter++ << " ";
	if (iter == vi.end())
		return;
	else
		recursivePrint(vi, iter);	
}
