#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d ",&a[i]);
    }
    if(a[n]>a[n-1]>a[n-2]>a[n-3]>a[n-4]>a[n-5]>a[n-6])
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
    return 0;
}