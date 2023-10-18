#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=a*pow(1+(b/100),c)-a;
    d=round(d*100)/100;
    printf("%.2lf
",d);
    
}

