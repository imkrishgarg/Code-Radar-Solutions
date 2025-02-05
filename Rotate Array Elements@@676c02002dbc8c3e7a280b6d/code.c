#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=k;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }

}