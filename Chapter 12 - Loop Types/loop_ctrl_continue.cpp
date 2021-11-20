// pg 68 , 69

#include <iostream>
using namespace std;

int main()
{
	// local variable declaration
	int a = 10;

	// do loop execution
	do
	{
		if (a == 15)
		{
			// skip iteration
			a++;
			continue;
		}
		printf("Value of a : %d\n", a);
		a++;
	} 
	while (a < 20);

	return 0;
}