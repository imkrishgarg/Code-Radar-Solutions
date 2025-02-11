#include <stdio.h>
void prime_check()
{
    int i,num; 
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("0\n");
           
        }
    }
    if(i==num)
    {
        printf("1\n");
    }
    
}
int main()
{
    prime_check();
    return 0;

}
