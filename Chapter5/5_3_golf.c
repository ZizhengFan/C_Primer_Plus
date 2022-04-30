/*
 * 高尔夫锦标赛记分卡
 */

#include <stdio.h>

int main(){
    int jane, tarzan, cheeta;
    //此处展现C语言中的三重赋值
    //赋值顺序从右往左
    cheeta = tarzan = jane = 68;
    printf("                  cheeta   tarzan   jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
    
    return 0;
}
