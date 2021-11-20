// pg 66 , 67

#include <iostream>
using namespace std;

int main()
{
	//local var decl 
	int a = 10;

	// do loop execution
	do 
	{
		printf("Value of a : %d\n", a);
		a++;

		if (a > 15)
		{
			// terminate the loop
			break;
		}
	}
	while (a < 20);

	return 0;
}