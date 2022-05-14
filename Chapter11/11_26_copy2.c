/*
 * 
 */

#include <stdio.h>
#include <string.h>

#define WORDS "beast"
#define SIZE 40

int main(void){
    const char *orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;
    
    puts(orig);
    puts(copy);
    
    // 注意，strcpy()把源字符串中的空字符也拷贝在内
    ps = strcpy(copy+7, orig);
    
    puts(copy);
    puts(ps);
    
    return 0;
}
