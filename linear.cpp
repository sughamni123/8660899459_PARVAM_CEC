#include<iostream>
using namespace std;
class LinearSearch
{
    private:
    int a[10],loc,i,flag,key;
    public:
    void getData()
    {
        cout<<"Enter the elements of the array:"<<endl;
        for(i=0;i<10;i++)
        cin>>a[i];
        cout<<"Enter the element to be searched:";
        cin>>key;
    }
    void search()
    {
        flag=0;
        for(i=0;i<10;i++)
        {
            if(a[i]==key)
            {
                loc=i;
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"Found at "<<key;
        else
        cout<<"Not Found";
    }
};
int main()
{
    LinearSearch l;
    l.getData();
    l.search();
    return 0;
}