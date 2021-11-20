// pg 70 , 71

#include <iostream>
using namespace std;

int main()
{
	// local var decl
	int a = 10;

	// do loop execution
	LOOP : do
	{
		if (a == 15)
		{
			// skip the iteration
			a++;
			goto LOOP;
		}
		printf("Value of a : %d\n", a);
		a++;

	} while (a < 20);

	return 0;
}