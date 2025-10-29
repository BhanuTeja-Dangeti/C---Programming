#include<stdio.h>
#include<math.h>
int main()
{
    int c,s;
    double loss;
    scanf("%d%d",&c,&s);
    loss=(c-s)*100.0/c;
    printf("%.2lf",loss);
    return 0;
}
