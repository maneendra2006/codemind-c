#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<=a-1;i++)
    {
        for(j=0;j<=a-1;j++)
        {
            printf("%d ",i%2);
        }
        printf("
");
    }
}