// pg 254, 255

#include <iostream>

using namespace std;

int main()
{
    double *pvalue = NULL; // Pointer Initialised
    if (!(pvalue = new double)) // Request Memory for Variable
    {
        cerr << "Out of Memory!" << endl;
        exit(1);
    }
    
    *pvalue = 100;

    cout << pvalue << endl;
    cout << *pvalue << endl;

    return 0;
}

// NOTE: use 'new' instead of 'malloc'