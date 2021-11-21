// pg 194, 195

#include <iostream>

using namespace std;

// Base Class 'Shape'
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
};

// Base Class 'PaintCost'
class PaintCost
{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};

// Derived Class
class Rectangle: public Shape, public PaintCost
{
    public:
        int getArea()
        {
            return width * height;
        }
};

int main()
{
    Rectangle rectangle;

    rectangle.setWidth(5);
    rectangle.setHeight(7);

    cout << "Area: " << rectangle.getArea() << endl;
    cout << "Paint Cost: $" << rectangle.getCost(rectangle.getArea()) << endl;

    return 0;
}