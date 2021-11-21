// pg 200, 201

#include <iostream>

using namespace std;

class PrintData
{
    public:
        void print(int i)
        {
            cout << "Printing 'int': " << i << endl;
        }

        void print(double d)
        {
            cout << "Printing 'double': " << d << endl;
        }

        void print(char *c)
        {
            cout << "Printing 'char': " << c << endl;
        }

        void print(char *c, int i)
        {
            cout << "'char' = " << c << " 'int' = " << i << endl;
        }
};

int main()
{
    PrintData pd;

    // int
    pd.print(5);

    // double
    pd.print(420.69);

    // char
    pd.print("Hello There!");

    // char & int
    pd.print("AEO", 1234);

    return 0;
}