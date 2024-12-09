//print the sum of all the elements of an array//
#include<stdio.h>
int main()
{
    int sum=0,a[100],size=0,i;
    scanf("%d",&size);
    for(int i=0;i<size;scanf("%d",&a[i++]));
    
    for(int i=0;i<size;printf("%d ",a[i]),sum+=a[i++]);
    printf("sum of all elements is %d",sum);
    return 0;
}
