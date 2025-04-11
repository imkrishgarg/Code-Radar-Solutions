#include<stdio.h>
void prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
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

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    prime(n);
    return 0;

}





















