//print even and odd elements of an array//
#include<stdio.h>
int main()
{
    int a[100],even,odd,size=0;
    scanf("%d",&size);
    for(int i=0;i<size;scanf("%d",&a[i]));
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
         if(size%2==0)
          even=a[i];
         else
          odd=a[i];
    }
    printf("even numbers of an array = %d odd numbers of an array = %d",even,odd);
    return 0;
}