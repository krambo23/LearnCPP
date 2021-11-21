#include <iostream>

using namespace std;

class Box 
{
    // Class Members
    private: // 'private' Access Modifiers
        // Member Variables
        double length;
        double breadth;
        double height;
    
    public: // 'public' Access Modifiers
        // Default Constructor
        Box()
        {
            objectCount++;
            cout << "Box is Created!" << endl;
        }

        // Constructor w/ Params
        Box(double l)
        {
            objectCount++;
            cout << "Box is Created!" << endl;
            this->length = l;
            cout << "Length is: " << this->length << endl;
        }

        // Destructor
        ~Box()
        {
            objectCount--;
            cout << "Box is Destructed!" << endl;
        }

        // Static Member Variables
        static int objectCount;

        // Static Member Functions
        static int getNumberOfObjects()
        {
            return objectCount;
        }

        // Member Functions
        double getVolume() 
        {
            return this->length * this->breadth * this->height;
        }

        void setLength(double l)
        {
            this->length = l;
        }

        void setBreadth(double b)
        {
            this->breadth = b;
        }
        
        void setHeight(double h)
        {
            this->height = h;
        }
};

// Initialise Static Member Variables
int Box::objectCount = 0;


int main()
{
    cout << "Initial Box Objects: " << Box::getNumberOfObjects() << endl;

    Box box1;
    Box box2(20.0);
    Box *box_ptr;

    // Box 1 Specs
    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);

    // Box 2 Specs
    box2.setLength(12.0);
    box2.setBreadth(13.0);
    box2.setHeight(10.0);

    cout << "Volume of Box 1: " << box1.getVolume() << endl;
    cout << "Volume of Box 2: " << box2.getVolume() << endl;

    // Accessing Object through Pointer
    box_ptr = &box1;
    cout << "[PTR] Volume of Box 1: " << box_ptr->getVolume() << endl;

    box_ptr = &box2;
    cout << "[PTR] Volume of Box 2: " << box_ptr->getVolume() << endl;

    // Total Number of Objects
    cout << "Number of Box Objects: " << Box::objectCount << endl;
    cout << "Final Number of Box Objects: " << Box::getNumberOfObjects() << endl;

    return 0;
}