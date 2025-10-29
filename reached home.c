#include<stdio.h>
int main() {
    long long x,y;
    scanf("%lld%lld",&x,&y);
    long long maxdistance=x*5;
    if (maxdistance >=y){
        printf("YES
");
    }else{
        printf("NO
");
