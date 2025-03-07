#include<stdio.h>
int main()
{
    int i,j,n,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=1;
        {
            for(j=1;j<=i;j++)
            {
                d=64;
                char ch=(char)d+a;
                printf("%c",&ch);


            }
            
        }
        printf("\n");
    }
    return 0;
}