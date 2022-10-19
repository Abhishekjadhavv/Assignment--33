// Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called
// square and parallelogram from the base shape. Add to the base class, a member
// function get_data() to initialise base class data members and another member
// function display_area() to compute and display the area of figures. Make
// display_area() as a virtual function and redefine this function in the derived classes to
// suit their requirements.
// Using these three classes, design a program that will accept dimensions of a
// square or a parallelogram interactively, and display the area.

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

class square :public shape{
  private:
    double area;

public:
    square()
    {
        area = 0.0;
    }
   
    void calculateArea(){
      area = getA() * getB();  
    } 

    void display_area()
    {
        cout << "Area of square is " << area << endl;
    }
};

class parallelogram : public shape{
 private:
    double area;

public:
    parallelogram()
    {
        area = 0.0;
    }
   
    void calculateArea(){
      area = getA() * getB();  
    } 

    void display_area()
    {
        cout << "Area of parallelogram is " << area << endl;
    }
};

int main(){
    square obj1;
    parallelogram obj2;

    obj1.get_Data(4.5,5.7);
    obj1.calculateArea();
    obj1.display_area();

    obj2.get_Data(5.5,5.7);
    obj2.calculateArea();
    obj2.display_area();


    return 0;
}