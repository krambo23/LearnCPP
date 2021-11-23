#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    cout << "Vector Size: " << vec.size() << endl;

    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i * 5);
    }

    cout << "New Vector Size: " << vec.size() << endl;

    // Print Vector
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }

    cout << endl;

    // Print Vector using Iterator
    vector<int>::iterator v = vec.begin();
    int i = 0;
    while(v != vec.end())
    {
        cout << "vec[" << i << "] = " << *v << endl;
        v++;
        i++;
    }

    return 0;
}