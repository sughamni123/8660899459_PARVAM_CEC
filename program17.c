/*c program to generate numerical patterns
1 2 3 4 5
1 2 3 4
1 2 3 
1 2
1
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
        printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

