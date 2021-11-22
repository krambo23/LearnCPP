#include <iostream>

using namespace std;

// Base Class
class Shape
{
    protected:
        int width;
        int height;

    public:
        void setWidth(int w)
        {
            width = w;
        }

        void setHeight(int h)
        {
            height = h;
        }

        virtual int getArea() = 0;
};

// Derived Classes
class Rectangle: public Shape
{
    public:
        int getArea()
        {
            return (width * height);
        }
};

class Triangle: public Shape
{
    public:
        int getArea()
        {
            return (width * height) / 2;
        }
};

int main()
{
    Rectangle rectangle;
    Triangle  triangle;

    rectangle.setWidth(5);
    rectangle.setHeight(7);
    cout << "Total Rectangle area: " << rectangle.getArea() << endl;

    triangle.setWidth(5);
    triangle.setHeight(7);
    cout << "Total Triangle area: " << triangle.getArea() << endl;

    return 0;
}