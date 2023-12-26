#include <iostream>
using namespace std;

// forward declaratio of class complex as compiler compiles line by line.
class Complex;
class Calculator
{
    public:
    // Need to declare function here cannot define as compiler does not know how complex obj is being initialized.
    int addReal( Complex , Complex ); 

};
class Complex
{
    int x,y;
    friend int Calculator :: addReal( Complex , Complex );
    public:
    Complex (int a, int b)
    {
        x = a;
        y = b;
    }
};

// Definition of function now as compiler have idea about initization of Complex class obj and its data members x and y.

int Calculator :: addReal( Complex A, Complex B)
    {
        return A.x + B.x;
    }

int main()
{
    Calculator obj;
    Complex o1(4,2);
    Complex o2(3,4);
    
    cout<<obj.addReal(o1,o2)<<endl;
}