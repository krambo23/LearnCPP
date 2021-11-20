// pg 100 , 101

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int i, j;

	// set the seed
	srand((unsigned) time (NULL));

	// generate 10 random nos
	for (i = 0; i < 10; i++)
	{
		// generate actual random number
		j = rand();
		printf("Random Number : %d\n", j);
	}

	return 0;
}