#include <iostream>

using namespace std;

class Employee
{
    public:
    int Increment( int &sal)
    {
        sal = sal +5000;
        cout<<"Salary after increment is "<<sal<<endl;
    }
};
int main()
{
    Employee obj;
    int Salary = 30000;
    obj.Increment(Salary);
    cout<<"Salary before increment is "<<Salary<<endl;
}