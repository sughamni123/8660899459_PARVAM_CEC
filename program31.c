//program to find the largest number in an aray using pointer//
#include<stdio.h>
int main()
{
	int size=0,a[100],i,*large=a;
	scanf("%d",&size);
	for( i=0;i<size;scanf("%d",a+i++));

    for(i=1;i<size;i++)
    {
        if(* large<a[i])
        large=&a[i];
    }
    printf("Largest element is %d",*large);
    return 0;
} 
