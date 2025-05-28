#include<iostream>
using namespace std;
class A
{
    int a=4;
    int b=5;
    public:
    int mul()
    {
        cout<<"In class a"<<endl;
        int c=a*b;
        cout<<"returning c"<<endl;
        return c;
    }
};
class B:public A
{
    public:
    void display()
    {
        cout<<"In class b"<<endl;
        int result=mul();
        cout<<"Multiplication of a and b is:"<<result<<std::endl;
    }
};
int main()
{
    cout<<"In main"<<endl;
    B b;
    b.display();
    b.mul();
    return 0;
}