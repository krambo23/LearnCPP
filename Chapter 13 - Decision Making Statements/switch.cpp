// pg 81 , 82

#include <iostream>
using namespace std;

int main()
{
	// local var decl
	char grade = 'A';

	switch(grade)
	{
		case 'A' :
			cout << "Excellent!" << endl;
      		break;

      	case 'B':

      	case 'C':
      		cout << "Well done" << endl;
      		break;

      	case 'D':
      		cout << "You passed" << endl;
      		break;

      	case 'F':
      		cout << "Better try again" << endl; 
      		break;

      	default : 
      		cout << "Invalid grade" << endl;
    }

    cout << "Your Grade is : " << grade << endl;

    return 0;
}