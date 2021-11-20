// pg 121 , 122

#include <iostream>

using namespace std;

int main()
{
	int var = 20; // actual variable declaration
	int *ip;      // pointer variable

	ip = &var;    // store address of var in pointer variable

	printf("Value of var variable: %d\n", var);

	// print the address stored in ip variable
	cout << "Address stored in ip variable : ";
	cout << ip << endl;

	// access the value at the address available in pointer
	cout << "Value of the *ip variable : ";
	cout << *ip << endl;

	return 0;
}