#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string text;
    ifstream MyFile("C:\\Users\\142\\Desktop\\gss\\sample.txt");
    while(getline(MyFile,text));
    cout<<text;
    MyFile.close();
    return 0;
}