#include <stdio.h>
int num;
scanf("%d",&num);
void prime_check(num)
{
    int i;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("0");
            break;
        }
    }
    if(i==num)
    {
        printf("1");
    }
    
}
prime_check();