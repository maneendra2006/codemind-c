#include<stdio.h>
int main()
{
    int a,b,i,count=0;
    scanf("%d",&a);
    b=3*a;
    for(i=1;i<=b;i++)
    {
        if(i%3==0)
        {
            printf("%d ",i);
        }
    }
   
    
}