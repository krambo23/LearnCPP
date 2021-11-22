// pg 256

#include <iostream>

using namespace std;

int main()
{
    char *pvalue = NULL; // Initialise Pointer
    pvalue = new char[20]; // Request Memory

    // Fill Array
    for (int i = 0; i < 20; i++)
    {
        pvalue[i] = char(i + 65);
    }

    // Print Array
    for (int i = 0; i < 20; i++) 
    {
        cout << pvalue[i] << endl;
    }
    
    delete[] pvalue; // Clear Array

    return 0;
}