// pg 93 , 94

#include <iostream>
using namespace std;

// function declaration
void swap(int &x, int &y);

int main()
{
	// local variable declaration
	int a = 100;
	int b = 200;

	printf("Before swap \nValue of A : %d\nValue of B : %d\n", a, b);

	// calling a function to swap the values
	swap(a, b);

	printf("After swap \nValue of A : %d\nValue of B : %d\n", a, b);
}

void swap(int &x, int &y)
{
	int temp;

	temp = x; // store the value of x in temp
	x = y; // value of y is swapped into x
	y = temp; // value of x is swapped into y

	return;
}