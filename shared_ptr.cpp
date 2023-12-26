#include <iostream>
#include <memory>

using namespace std;

class Rectangle
{
    public:
    int Area(int length, int width)
    {
        return length*width;
    }
    int Perimeter(int length, int width)
    {
        return 2*(length+width);
    }
    Rectangle()
    {
        cout<<"Constructor called"<<endl;
    }
    ~Rectangle()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    shared_ptr<Rectangle> ptr(new Rectangle());
    //Rectangle *ptr = new Rectangle();
    shared_ptr<Rectangle> ptr2 = ptr;  // Can assign value of one pointer to another unlike unique_ptr. Here ownership is multi to one.
    cout<<ptr2->Area(5,10)<<endl;
    cout<<ptr2->Perimeter(5,10)<<endl;
}