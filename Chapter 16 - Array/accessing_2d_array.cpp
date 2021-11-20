// pg 106 , 107

#include <iostream>
using namespace std;

int main()
{
	// an array w/ 5 rows and 2 columns.
	int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};

	// output each array element's value
	for (int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("a[%d][%d]\n", i, j);
			printf("%d\n", a[i][j]);
		}
	}

	return 0;
}