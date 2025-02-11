#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

void prime_check(num)
{
    int i; 
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("0\n");
            break;
           
        }
    }
    if(i==num)
    {
        printf("1\n");
    }
    
}

    prime_check();
    return 0;
}

