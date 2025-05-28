#include<iostream>
using namespace std;
class Calculator
{
    public:
    int add(int a,int b);
};
int Calculator::add(int a,int b)
{
    return a+b;
}
int main()
{
    Calculator c;
    cout<<c.add(2,5);
    return 0;
}