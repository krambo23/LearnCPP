// pg 133, 134
#include <iostream>

using namespace std;

int main()
{
    int var;
    int *ptr;
    int **pptr;

    // Variable
    var = 3000;

    // Address of 'var' variable
    ptr = &var;

    // Address of 'ptr' variable
    pptr = &ptr;

    cout << "Value of 'var': " << var << endl;
    cout << "Value of '*ptr': " << *ptr << endl;
    cout << "Value of '**pptr': " << **pptr << endl;

    return 0;
}