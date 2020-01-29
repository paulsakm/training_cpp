#include <iostream>
#include <fstream>
using namespace std;

class Shape
{
    protected:
        float width, height;

    public:
        void set_value(float a, float b)
        {
            width = a;
            height = b;
        }
};

class Rect: public Shape
{

    public:
        float rect_area()
        {
            return width*height;
        }
};

class Tri: public Shape
{
    public:
        float tri_area()
        {
            return (width*height)/2;
        }
};


int main()
{
    Rect rect;
    Tri triangle;

    rect.set_value(5, 10);
    triangle.set_value(12, 22);

    cout << rect.rect_area() << endl;
    cout << triangle.tri_area() << endl;

    return 0;
}
