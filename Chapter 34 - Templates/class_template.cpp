// pg 266, 267, 268

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack
{
    private:
        vector<T> elements;
    
    public:
        void push(T const &element)
        {
            elements.push_back(element); 
        }

        void pop()
        {
            if (elements.empty()) {
                throw out_of_range("Stack<>::pop(): empty stack");
            }

            // Remove Last Element
            elements.pop_back();
        }

        T top() const
        {
            if (elements.empty()) 
            {
                throw out_of_range("Stack<>::top(): empty stack");
            }

            // Last Element
            return elements.back(); 
        }

        bool empty() const
        {
            return elements.empty(); // True if Empty
        }
};

int main() {
    try 
    {
        Stack<int> intStack;
        Stack<string> stringStack;
        
        intStack.push(7);
        cout << intStack.top() << endl;

        stringStack.push("Hello");
        cout << stringStack.top() << std::endl; 
        
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const &ex) 
    {
        cerr << "Exception: " << ex.what() << endl;
        return -1; 
    }
}