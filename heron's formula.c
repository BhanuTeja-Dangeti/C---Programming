#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double s,herons;
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2.0;
    herons=sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("%.4lf",herons);
    return 0;
}
