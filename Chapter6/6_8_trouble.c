/*
 * 根据用户键入的整数求和
 * 循环出问题版
 *
 * 读者可能不太理解，程序的循环一直运行着，用户在输入q后完全没机会继续输入。
 * 如果scanf()读取指定形式的输入失败，就把无法读取的输入留在输入队列中，供下次读取。
 * 当scanf()把q作为整数读取时失败了，它把q 留下。
 * 在下次循环时，scanf()从上次读取失败的地方（q）开始读取，
 * scanf() 把q作为整数读取，又失败了。
 * 因此，这样修改后不仅创建了一个无限循环，还创建了一个无限失败的循环
 */

#include <stdio.h>

int main(){
    long num;
    long sum = 0L;
    int status;
    
    printf("Enter an int to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    
    while(status = 1){
        sum += num;
        printf("Please enter the next int (q to quit): ");
        status = scanf("%ld", &num);
        
    }
    
    printf("Those ints sum to %ld.\n", sum);

    return 0;
}
