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
    unique_ptr<Rectangle> ptr(new Rectangle());
    //Rectangle *ptr = new Rectangle();
    unique_ptr<Rectangle> ptr2 = move(ptr);  //In unique pointer we can not change ownership directly, instread we can move ownership from one pointer to another, it's the only way.
    cout<<ptr2->Area(5,10)<<endl;
    cout<<ptr2->Perimeter(5,10)<<endl;
    // Can use ptr2.reset(new Rectangle());  or if it's of type int having value 5 then ptr2.reset(new int(10));
}