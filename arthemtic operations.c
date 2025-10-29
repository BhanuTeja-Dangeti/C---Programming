#include<stdio.h>
int main()
{
    int num1,num2,Sum,Difference,Product,Quotient,Remainder;
    scanf("%d%d",&num1,&num2);
    Sum=num1+num2;
    Difference=num1-num2;
    Product=num1*num2;
    Quotient=num1/num2;
    Remainder=num1%num2;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d
",Sum,Difference,Product,Quotient,Remainder);
    return 0;
}
