#include<stdio.h>
int main ()
{
    float speed_in_kmph,mps;
    scanf("%f",&speed_in_kmph);
    mps=(speed_in_kmph)*5/18;
    printf("%.2f",mps);
    return 0;
}
