/*
 * 拼接两个字符串，检查第1个数组的大小
 */

#include <stdio.h>
#include <string.h>

#define SIZE 30
#define BUGSIZE 13

char *s_gets(char *st, int n);

int main(void){
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;
    
    puts("what is your favorite flower?");
    s_gets(flower, SIZE);
    
    if((strlen(addon) + strlen(flower) + 1) <= SIZE){
        strcat(flower, addon);
    }
    
    puts(flower);
    puts("what is your favorite bug?");
    
    s_gets(bug, BUGSIZE);
    // bug字符串初始化长度为BUFGSIZE，减去我们放到bug里面的输入字符串长度
    // 再减去一个'\0'
    // 剩下的就是字符串2可用来strcat的空间，也就是说：
    // The strncat() function appends not more than n characters from s2, and
    // then adds a terminating `\0'.
    available = BUGSIZE - strlen(bug) - 1;
    // strncat可以保证第一个string不会溢出，
    // 因为int n参数是最大能添加到第一个string的字符的个数，包括'\0'
    strncat(bug, addon, available);
    puts(bug);
    
    
    return 0;
}


char *s_gets(char *st, int n){
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    
    if(ret_val){
        
        while(st[i] != '\n' && st[i] != '\0'){
            i++;
        }
        
        if(st[i] == '\n'){
            st[i] = '\0';
        }else{
            
            while(getchar() != '\n'){
                continue;
            }
        }
    }
    
    return ret_val;
    
}