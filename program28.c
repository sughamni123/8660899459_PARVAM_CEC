//pointers//
#include<stdio.h>
int main()
{
    int n=0,*p=&n;
    scanf("%d",&n);
    *p=10;
    printf("variable n value %d",n);
    return 0;
}