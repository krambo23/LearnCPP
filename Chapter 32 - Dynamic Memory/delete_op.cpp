// pg 255

#include <iostream>

using namespace std;

int main()
{
    double *pvalue = NULL; // Initialise Pointer
    pvalue = new double; // Request Memory

    *pvalue = 420.69;
    cout << "pvalue: " << *pvalue << endl;

    delete pvalue; // Free Up Memory

    return 0;
}