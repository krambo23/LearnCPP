// pg 103 , 104

#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{
	int n[10];  // n is the array of 10 integers

	// initialise elements of array n to 0
	for (int i = 10; i < 10; i++)
	{
		n[i] = i + 100; // set element at location i to i + 100
	}
	cout << "Element" << setw(13) << "Value" << endl;

	// output each array element's value
	for (int j = 0; j < 10; j++)
	{
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}

	return 0;
}