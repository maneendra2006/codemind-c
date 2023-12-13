#include<stdio.h>
int main()
{
	int a,b,c,i,sum=0,count=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=i*i;
        sum+=b;
	}
	for(i=1;i<=a;i++)
	{
		count+=i;
	}
	printf("%d",(count*count)-sum);
}