/*
 * 根据用户键入的整数求和
 */

#include <stdio.h>

int main(){
    long num;
    long sum = 0L;
    int status;

    printf("Enter an int to be summed ");
    printf("(q to quit): ");
//    status = scanf("%ld", &num);

    while(scanf("%ld", &num) == 1){
        sum += num;
        printf("Please enter the next int (q to quit): ");
//        status = scanf("%ld", &num);

    }

    printf("Those ints sum to %ld.\n", sum);

    return 0;
}
