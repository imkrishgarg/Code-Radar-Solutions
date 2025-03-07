#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        int a=1;
        for(j=1;j<=i;j++)
        {
            int d=64;
            char ch=(char)d+a;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;

}