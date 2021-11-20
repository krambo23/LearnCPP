// pg 148 

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // Get Current Time
    time_t now = time(0);
    cout << "Seconds Passed Since 1970-01-01: " << now << endl;

    // Create Struct of Current Time
    tm *time_struct = localtime(&now);
    cout << "Year: " << time_struct->tm_year + 1900 << endl;
    cout << "Month: " << time_struct->tm_mon + 1 << endl;
    cout << "Day: " << time_struct->tm_mday << endl;
    cout << "Time: " << time_struct->tm_hour << ":";
    cout << time_struct->tm_min << ":";
    cout << time_struct->tm_sec << endl;

    return 0;
}