// pg 278, 279

#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);
}

int main()
{
    int i = 0;
    while (++i) 
    {
        cout << "Sleeping!" << endl;
        if (i == 5)
        {
            raise(SIGINT);
        }
        usleep(1000000 * 1); // 1000000 microsec = 1s
    }

    return 0;
}