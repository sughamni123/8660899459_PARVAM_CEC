#include<iostream>
using namespace std;
class Base
{
   protected:
   int num;
};
class Derived:public Base
{
    public:
    void setValues(int n)
    {
        num=n;
    }
    void display()
    {
    cout<<"Number is:"<<num;
    }
};
int main()
{
Derived d;
d.setValues(45);
d.display();
return 0;
}