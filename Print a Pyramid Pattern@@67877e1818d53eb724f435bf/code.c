#include<stdio.h>
int main()
{
    int n,a,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=1;
        for(j=1;j<=n;j++)
        {
            printf(" ");
            printf("%d",a);
            a+=2;
        }
    }
    return 0;
}