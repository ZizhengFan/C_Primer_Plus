/*
 * 计算数的整数幂
 */

#include <stdio.h>

double power(double n, int p);

int main(void){
    double x, xpow;
    int exp;
    
    printf("Enter: ");
    
    while(scanf("%lf%d", &x, &exp) == 2){
        xpow = power(x, exp);
        printf("%.2lf to the power %d is %.5lf\n", x, exp, xpow);
        printf("Next: ");
    }
    
    printf("Bye!\n");
    
    return 0;
}

double power(double n, int p){
    double pow = 1;
    int i;
    
    for(i=1; i<=p; i++){
        pow *= n;
    }
    
    return pow;
}
