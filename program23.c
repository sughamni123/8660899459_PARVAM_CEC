//program to print the array//
#include<stdio.h>
int main()
{
    int size a[100];
    scanf("%d",&size);
    for(int i=0;i<size;i++;scanf("%d",&a[i++]));
    for(int i=0;i<size;i++;printf("%d ",a[i++]));
    return 0;
}