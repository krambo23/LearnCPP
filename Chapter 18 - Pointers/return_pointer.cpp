// pg 137, 138

#include <iostream>
#include <ctime>

using namespace std;

const int MAX = 10;

// Generate Random Number
int *getRandom()
{
    static int r[MAX];

    // Set Seed
    srand((unsigned) time(NULL));
    for (int i = 0; i < MAX; i++)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}

int main()
{
    int *p;

    p = getRandom();
    for (int i = 0; i < MAX; i++)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    return 0;
}