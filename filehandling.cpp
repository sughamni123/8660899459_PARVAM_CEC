#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream MyFile("C:\\Users\\142\\Desktop\\gss\\sample.txt");
    MyFile<<"Hello world"<<endl;
    MyFile.close();
    return 0;
}