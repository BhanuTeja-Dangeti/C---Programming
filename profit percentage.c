#include<stdio.h>
#include<math.h>
int main ()
{
    int sp,cp;
    double profit_percentage;
    scanf("%d%d",&cp,&sp);
    profit_percentage=(sp-cp)*100.0/cp;
    printf("%.2lf",profit_percentage);
    return 0;
}
