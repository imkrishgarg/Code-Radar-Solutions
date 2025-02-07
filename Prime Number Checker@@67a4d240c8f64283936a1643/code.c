#include <stdio.h>
void prime_check()
{
    int i,num; 
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
int main()
{
    prime_check();

}
