#include<iostream>
using namespace std;
class Circle
{
   private:
    float radius;
    public:
    void setValues()
    {
        cout<<"Enter the value of radius:";
        cin>>radius;
    }
    void displayarea()
    {
        cout<<"Area is:"<<3.14*radius*radius<<endl;
    }
};
int main()
{
    Circle c;
    c.setValues();
    c.displayarea();
    return 0;
}
