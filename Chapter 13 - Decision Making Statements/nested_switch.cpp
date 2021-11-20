// pg 84 , 85

#include <iostream>
using namespace std;

int main()
{
	// local var decl
	int a = 100;
	int b = 200;

	switch(a)
	{
		case 100 :
			printf("This is part of the outer switch\n");

			switch(b)
			{
				case 200 : 
					printf("This is part of the inner switch\n");
			}
	}

	cout << "Exact value of a is : " << a << endl; 
	cout << "Exact value of b is : " << b << endl;

	return 0;
}