#include<stdio.h>
int main()
{
    int a,i;
    float avg,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
        
    {
       
       for(i=0;i<a;i++)
        sum=sum+arr[i];
        avg=sum/a;
	}
	printf("%.2f",avg);
}
