// pg 262, 263

#include <iostream>
using namespace std;

// NS1
namespace ns1
{
    void fn()
    {
        cout << "NS1" << endl;
    }

    // NS2
    namespace ns2
    {
        void fn()
        {
            cout << "NS2" << endl;
        }
    }
}

using namespace ns1::ns2; // Using NS2 which is nested in NS1

int main()
{
    fn();
    return 0;
}