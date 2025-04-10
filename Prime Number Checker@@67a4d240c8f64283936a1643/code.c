#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    prime(n);

}
void prime(int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(n%1==0)
        {
            printf("0");
            break;
        }
    }
    if(i==n)
    {
        printf("1");
    }

}
return 0;



















