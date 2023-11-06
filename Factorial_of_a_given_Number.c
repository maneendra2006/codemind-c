#include<stdio.h>
int main()
{
	int a,i,multiply=1;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		multiply*=i;
	}
	printf("%d",multiply);
	
}