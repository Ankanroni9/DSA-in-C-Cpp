#include<stdio.h>
#include<math.h>

int main(){
//pow
    int a = 5, b = 2;
    double f = pow(a,b);

    printf("%lf\n", f); //not integers

//sqrt & cbrt
    printf("%f\n", sqrt(25)); //not integer

    printf("%f\n", cbrt(125));

    return 0;
}