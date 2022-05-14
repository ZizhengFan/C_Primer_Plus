/*
 * 指针计算数组元素之和
 */

#include <stdio.h>

#define SIZE 10

int sump(int *start, int *end);

int main(void){
    int marbles[SIZE] = {
            20,10,5,39,4,16,19,26,31,20
    };
    int rst;
    
    rst = sump(marbles, marbles+SIZE);
    printf("total = %d", rst);

    
    return 0;
}


int sump(int *start, int *end){
    int total = 0;
    int temp;
    
    while(start < end){
        temp = *start;
        total += *start;
        start++;
    }
    
    return total;
}