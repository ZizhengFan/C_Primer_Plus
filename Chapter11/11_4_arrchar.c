/*
 * 指针数组，字符串数组
 */

#include <stdio.h>

#define SLEN 40
#define LIM 5

int main(void){
    // 注意！这玩意是是一个内含五个指针的一维数组
    // 因此它在内存中所占空间是8*5=40Bytes
    const char *mytalents[LIM] = {
            "Adding numbers swiftly",
            "Multiplying accurately",
            "Stashing data",
            "Following instructions to the letter",
            "Understanding the C language"
    };
    
    // 注意！这玩意是一个存储了5行40列的char数据的二维数组
    // 因此它在内存中所占空间是40*5*1=200Bytes
    const char yourtalents[LIM][SLEN]={
            "Walking in a straight line",
            "Sleeping",
            "Watching television",
            "Mailing letters",
            "Reading email"
    };
    
    int i;
    
    puts("Let's compare talents.");
    printf ("%-36s  %-25s\n", "My Talents", "Your Talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",
           sizeof(mytalents), sizeof(yourtalents));
    
    
    return 0;
}
