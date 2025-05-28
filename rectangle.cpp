#include<iostream>
using namespace std;
class rectangle
{
    private:
    int len,breadth;
    public:
    void setValues()
    {
        cout<<"Enter the length:";
        cin>>len;
        cout<<"Enter the breadth:";
        cin>>breadth;
    }
    void displayarea()
    {
        cout<<"Area is:"<<len*breadth<<endl;
    }
};
int main()
{
    rectangle r;
    r.setValues();
    r.displayarea();
    return 0;
}