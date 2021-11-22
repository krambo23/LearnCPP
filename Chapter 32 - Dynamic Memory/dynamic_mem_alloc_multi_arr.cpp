// pg 256

#include <iostream>

using namespace std;

int main()
{
    // Multidimension Array
    const int ROW = 2;
    const int COL = 3;

    // Allocate Memory to Rows
    double **pvalue = new double *[ROW];

    // Allocate Memory to Columns
    for (int i = 0; i < COL; i++)
    {
        pvalue[i] = new double[COL];
    }

    // Fill Array
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            pvalue[i][j] = i + j;
        }
    }

    // Display Array
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "[" << i << "]";
            cout << "[" << j << "]";
            cout << " = " << pvalue[i][j] << endl;
        }
    }

    cout << endl;

    // Release Multidimension Array from Memory
    for (int i = 0; i < ROW; i++)
    {
        delete[] pvalue[i];
    }
    
    delete[] pvalue;

    // Display Array
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "[" << i << "]";
            cout << "[" << j << "]";
            cout << " = " << pvalue[i][j] << endl;
        }
    }

    return 0;
}