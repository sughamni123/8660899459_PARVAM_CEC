//odd or even sum of entered array//
#include<stdio.h>
int main()
{
    int evensum=0,oddsum=0,a[100],size=0,i;
    scanf("%d",&size);
    for(int i=0;i<size;scanf("%d",&a[i++]));
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
         if(size%2==0)
          evensum+=a[i];
         else
          oddsum+=a[i];
    }
   printf("sum of even %d odd %d",evensum,oddsum);
   return 0; 
}
    
    
    
