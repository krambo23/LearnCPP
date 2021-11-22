// pg 258, 259
#include <iostream>

using namespace std;

// Namespace 1
namespace ns1
{
    void fn()
    {
        cout << "NS1" << endl;
    }
}

// Namespace 2
namespace ns2
{
    void fn()
    {
        cout << "NS2" << endl;
    }
}

int main()
{
    ns1::fn();
    ns2::fn();

    return 0;
}