/*
 * 使用continue跳过部分循环
 *
 * 不断输入学生分数
 * 求平均分并更新记录最大值和最小值
 *
 * 注意！要时刻判断输入的数据是否有效
 * 有效数据进行处理
 * 无效数据要被无视
 * 然后continue到while接收新数据
 */

#include <stdio.h>

int main(void){
    const float MIN = 0.0f;
    const float MAX = 100.0f;
    
    float score;
    float total = 0.0f;
    int n = 0;
    
    // 此处的巧思非常重要！这种设计思想要学会！
    float min = MAX; // 把min设为可能出现的最大值，这样任何输入的有效数据都会小于等于它，以此保证三元运算符的更新
    float max = MIN; // 把max设为可能出现的最小值也是同理
    
    printf("Enter float: ");
    
    while(scanf("%f", &score) == 1){
        
        if(score < MIN || score > MAX){
            printf("%0.1f is an invalid value. Try again: ", score);
            continue;
        }
    
        printf("\nAccepting %0.1f:\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        
        total += score;
        n++;
    
        printf("Next: ");
    }
    
    if(n > 0){
        printf("Average of %d scores is %0.1f.\n", n, total / (float)n);
        printf("Lowest  = %0.1f, Highest = %0.1f\n", min, max);
    }else{
        printf("No valid scores were entered!\n");
    }
    
    return 0;
}
