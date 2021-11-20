// pg 146, 147

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // Current Date / Time based on Current System
    time_t now = time(0);

    // Convert Time to String
    char *date_time = ctime(&now);

    cout << "Local Date & Time: " << date_time << endl;

    // Convert Date / Time to UTC
    tm *utc_now = gmtime(&now);
    date_time = asctime(utc_now);
    cout << "UTC Date & Time: " << date_time << endl;

    return 0;
}