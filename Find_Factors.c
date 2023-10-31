#include<stdio.h>
int main()
{
    int a,i=1;
    scanf("%d",&a);
    while(i<=a)
    {
        if(a%i==0)
        printf("%d ",i);
        i++;
    }
}