 // pg 108

#include <iostream>
using namespace std;

int main()
{
	// an array w/ 5 elements
	double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	double *p;

	p = balance;

	// output each array's element value
	printf("Array values using pointer\n");
	for(int i = 0; i < 5; i++)
	{
		printf("*(p + %d) : %f\n", i, *(p + i));
	}

	printf("Array values using balance as address\n");
	for (int i = 0; i < 5; i++)
	{
		printf("*(Balance + %d) : %f\n", i, *(balance + i));
	}

	return 0;
}