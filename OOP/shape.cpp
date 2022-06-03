#include <iostream>
using namespace std;

class Shape
{
public:
    int width;
    int height;

    Shape(int width, int height)
    {
        this->width = width;
        this->height = height;
    }
        void area()
    {
        cout << "The area of rectangle is " << width * height << endl;
    }
};
class Rectangle : public Shape
{

public:
    void area()
    {
        cout << "The area of rectangle is" << width * height << endl;
    }
};
int main()
{

    Shape r1(2, 3);
    r1.area();
}