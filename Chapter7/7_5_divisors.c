/*
 * 使用嵌套if语句显示一个数的约数
 */

#include <stdio.h>
#include <stdbool.h>


bool IsPrime(unsigned long n);

//int main(){
//    int num;
//    int i;
//
//    printf("Enter: ");
//    scanf("%d", &num);
//
//    for(i=1; (i*i)<=num; i++){
//        if(num % i == 0 && i*i != num){
//            printf("%d %d\n", i, num / i);
//        }
//    }
//
//    return 0;
//}

int main(void){
    unsigned long num;
    unsigned long div;
    bool isPrime;
    
    printf("Enter: ");
    
    while(scanf("%lu", &num) == 1) {
        isPrime = IsPrime(num);
        if(isPrime) {
            printf("%lu is a prime number!\n", num);
//            break;
        }
    
        while(isPrime != 1) {
            for(div = 2; (div * div) <= num; div++) {
                if(num % div == 0) {
                    if((div * div != num)) {
                        printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                    } else {
                        printf("%lu is divisible by %lu and itself.\n", num, div);
                    }
                }
            }
            isPrime = 1;
        }
        printf("\n");
        printf("Next: ");
    
    }

    return 0;
}

bool IsPrime(unsigned long n){
    unsigned long i;
    bool isPrime = 1;
    
    for(i=2; i<n; i++){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    
    return isPrime;
}

