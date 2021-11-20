// pg 63

#include <iostream>
using namespace std;

int main()
{
	int i, j;

	for (i = 2; i < 100; i++)
	{
		for (j = 2; j <= (i / j); j++)
			if (!(i%j))
			{
				//printf("doge\n");
				break; // if factor found, then not prime
			}

			if (j > (i / j))
			{
				printf("%d is a prime number\n", i);
			}
	}
	return 0;
}