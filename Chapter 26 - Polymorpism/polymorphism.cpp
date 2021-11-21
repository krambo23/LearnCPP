// pg 228, 229

#include <iostream>

using namespace std;

class Shape
{
    protected:
        int width, height;
    
    public:
        Shape(int w=0, int h=0)
        {
            width = w;
            height = h;
        }

        // Pure Virtual Function
        virtual int area() = 0;
};

class Rectangle: public Shape
{
    public:
        Rectangle(int w=0, int h=0):Shape(w, h) {}

        int area()
        {
            cout << "Rectangle Class Area: " << endl;
            return width * height;
        }
};

class Triangle: public Shape
{
    public:
        Triangle(int w=0, int h=0):Shape(w, h) {}
        int area()
        {
            cout << "Triangle Class Area: " << endl;
            return (width * height) / 2;
        }
};

int main()
{
    Shape *shape;
    Rectangle rectangle(10, 7);
    Triangle triangle(10, 5);
    double area;

    // Rectangle
    shape = &rectangle;
    area = shape->area();
    cout << area << endl;

    // Triangle
    shape = &triangle;
    area = shape->area();
    cout << area << endl;

    return 0;
}