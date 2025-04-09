#include<stdio.h>
int main()
{
    int n,fir_ele;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fir_ele=arr[0];
   
    for(i=0;i<n-1;i++)
    {
         if(n=1)
    {
        printf("Sorted");
    }
    else if(fir_ele>arr[i+1] )
        {
            printf("Not Sorted");
            break;
            
        }
        else
        {
            printf("Sorted");
            break;
            
        }

    }
    return 0;
}