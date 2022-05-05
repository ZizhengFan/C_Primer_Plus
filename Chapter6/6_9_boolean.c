/*
 * 使用_Bool类型的变量 variable
 */

#include <stdio.h>

int main(){
    long num;
    long sum = 0L;
    _Bool input_is_good;
    
    printf("Enter a number: ");
    printf("(q to quit): ");
    
    input_is_good = (scanf("%ld", &num) == 1);
    
    while (input_is_good){
        sum += num;
        printf("Enter a number: ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    
    printf("Sum is %ld\n", sum);
    
    return 0;
}
