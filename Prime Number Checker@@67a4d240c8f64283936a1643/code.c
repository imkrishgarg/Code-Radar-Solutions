#include <stdio.h>
void prime_check(int num)
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
int main()
{
    prime_check(num);
    return 0;
}

  


