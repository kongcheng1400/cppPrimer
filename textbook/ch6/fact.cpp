#include <iostream>
#include "fact.h"


unsigned fact(unsigned v)
{
	unsigned result = 1;
	if (v != 0) 
	{
		while (v != 0)
			result *= v--;
	}
	else
		result = 0;

	return result;
}
