// pg 134, 135

#include <iostream>

using namespace std;

void getSeconds(unsigned long *par)
{
    // Get Current Number of Seconds
    *par = time(NULL);
    return;
}


int main()
{
    unsigned long sec;
    getSeconds(&sec);

    cout << "Number of Seconds : " << sec << endl;

    return 0;
}