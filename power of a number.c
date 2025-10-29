#include<stdio.h>
#include<math.h>
int main(){
    int x,y,m;
    double power;
    int result;
    scanf("%d%d%d",&x,&y,&m);
    power=pow(x,y);
    result=(int)fmod(power,m);
    printf("%d
",result);
    return 0;
}
