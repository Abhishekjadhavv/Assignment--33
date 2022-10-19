
#include <iostream>
using namespace std;

class shape
{
private:
    double a, b;

public:
    shape()
    {
        a = b = 0.0;
    }

    virtual void display_area() = 0;

    double get_Data(double x, double y)
    {
        a = x;
        b = y;
    }

    double getA(){
        return a;
    }

    double getB(){
        return b;
    }
};

class triangle : public shape
{
private:
    double area;

public:
    triangle()
    {
        area = 0.0;
    }
   
    void calculateArea(){
      area = getA() * getB();  
    } 

    void display_area()
    {
        cout << "Area of triangle is " << area << endl;
    }
};

class rectangle : public shape
{
private:
    double area;

public:
    rectangle()
    {
        area = 0.0;
    }
    
    void calculateArea(){
      area = (getA() * getB())/2;  
    } 

    void display_area()
    {
        cout << "Area of rectangle is " << area << endl;
    }
};

int main()
{
    triangle obj1;
    rectangle obj2;

    obj1.get_Data(4.5,5.4);
    obj1.calculateArea();
    obj1.display_area();


    obj2.get_Data(5.6,2.7);
    obj2.calculateArea();
    obj2.display_area();


    return 0;
}
