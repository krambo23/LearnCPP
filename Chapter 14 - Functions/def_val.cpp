// pg 95 , 96

#include <iostream>
using namespace std;

int sum(int a, int b = 20)
{
	int result;
	result = a + b;

	return result;
}

int main()
{
	// local var decl
	int a = 100;
	int b = 200;
	int result;

	// calling a func to add the vals
	result = sum(a, b);
	printf("Total Value is : %d\n", result);

	// calling a func again as follows
	result = sum(a);
	printf("Total Value is : %d\n", result);

	return 0;
}