// Extend the above program to display the area of circles. This requires the addition of
// a new derived class 'circle' that computes the area of a circle. Remember, for a circle
// we need only one value, its radius, but the set_data() function in the base class
// requires two values to be passed. (Hint: Make the second argument of get_data()
// function as a default one with zero value.)

#include <iostream>
using namespace std;

class Area
{
private:
    double a, b;

public:
    void setData(double, double = 0);
    double getA();
    double getB();
};

void Area::setData(double radius, double x)
{
    a = radius;
    b = x;
}

double Area::getA()
{
    return a;
}

double Area::getB()
{
    return b;
}

class circle : public Area
{
private:
    double area;

public:
    void calculateArea()
    {
        area = 3.14 * (getA() * getA());
    }

    void displayArea()
    {
        cout << "Area of circle is " << area << endl;
    }
};

int main()
{
    circle area;
    area.setData(5);
    area.calculateArea();
    area.displayArea();
    return 0;
}