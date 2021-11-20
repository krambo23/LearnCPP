// pg 88 , 89

#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);

int main()
{
	// local variable declaration
	int a = 100;
	int b = 200;
	int ret;

	// calling a function to get max value
	ret = max(a, b);

	printf("Max value is : %d\n", ret);

	return 0;
}

// function returning the max between the 2 nums
int max(int num1, int num2)
{
	// local variable declaration
	int result;

	if (num1 > num2)
	{
		result = num1;
	}

	if (num1 < num2) 
	{
		result = num2;
	}

	return result;
}