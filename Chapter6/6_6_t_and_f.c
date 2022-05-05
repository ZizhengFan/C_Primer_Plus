/*
 * C中的真和假的值
 */

#include <stdio.h>

int main(){
    int true_val, false_val;
    true_val = (10 > 2);
    false_val = (10 == 2);
    
    printf("true_val = %d\n", true_val);
    printf("false_val = %d\n", false_val);
    
    return 0;
}
