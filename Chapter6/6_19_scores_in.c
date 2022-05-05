/*
 * 使用循环处理数组
 */

#include <stdio.h>

#define SIZE 10
#define PAR 72

int main(){
    int index;
    int scores[SIZE];
    int sum = 0;
    float average;
    
    printf("Enter %d scores: ", SIZE);
    
    for(index=0; index<SIZE; index++){
        scanf("%d", &scores[index]);
    }
    
    printf("The scores are as follows: \n");
    
    for(index=0; index<SIZE; index++){
        printf("%-5d", scores[index]);
    }
    
    printf("\n");
    
    for(index=0; index<SIZE; index++){
        sum += scores[index];
    }
    average = (float)sum / SIZE;
    
    printf("Sum of scores: %d\n", sum);
    printf("Average of scores: %.2f\n", average);
    printf("That's a handicap of %.2f\n", average - PAR);
    
    
    
    
    return 0;
}
