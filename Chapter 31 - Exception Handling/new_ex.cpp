#include <iostream>
#include <exception>

using namespace std;

struct MyException: public exception
{
    const char *what() const throw()
    {
        return "C++ Exception";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException &e)
    {
        cout << "My Exception Caught!" << endl;
        cout << e.what() << endl;
    }
    catch (exception &e)
    {
        cout << "Something Went Wrong!" << endl;
    }

    return 0;
}