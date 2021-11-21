#include <iostream>

using namespace std;

class Adder
{
    private:
        int total;
    public:
        Adder(int t=0)
        {
            total = t;
        }

        void addNum(int number)
        {
            total += number;
        }

        int getTotal()
        {
            return total;
        }
};

int main()
{
    Adder a;
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);
    cout << "Total : " << a.getTotal() << endl;

    return 0;
}