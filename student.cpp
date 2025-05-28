#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int rollnum;
    public:
    Student()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the roll number:";
        cin>>rollnum;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll number:"<<rollnum<<endl;
    }
};
int main()
{
    Student s;
    s.display();
    return 0;
}