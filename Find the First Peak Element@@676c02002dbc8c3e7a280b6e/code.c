#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1])
    {
        printf("%d",arr[i]);
    }
    else if(arr[n-2]<arr[n-1])
    {
        printf("%d",arr[n-1]);
    }
    else{
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        {
            printf("%d",arr[i]);
        }

    }
    


    return 0;
}