#include <iostream>

using namespace std;

class Box
{
    public:
        Box()
        {
            cout << "Constructor Called!" << endl;
        }

        ~Box()
        {
            cout << "Destructor Called!" << endl;
        }
};

int main()
{
    Box *box_array = new Box[4]; // Request Memory
    delete[] box_array; // Free Memory

    return 0;
}