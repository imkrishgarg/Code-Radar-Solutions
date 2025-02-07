#include <stdio.h>
int num;
scanf("%d",&num);
void prime_check()
{
    int i; 
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
int main()
{
    prime_check();

}
