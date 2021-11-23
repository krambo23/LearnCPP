// pg 277

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
    signal(SIGINT, signalHandler);

    while (1 < 2)
    {
        cout << "Sleeping!" << endl;
        usleep(1000000 * 1); // 1000000 microsec = 1s
    }

    return 0;
}