#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int z, count=0;
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(arr[i]==z)
        count++;
    }
    printf("%d",count);
}