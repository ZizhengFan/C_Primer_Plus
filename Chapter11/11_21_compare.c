/*
 *
 */

#include <stdio.h>
#include <string.h>

#define ANSWER "Grant"
char *s_gets(char *st, int n);

#define SIZE 40

int main(void){
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    
    // 如果两个字符串参数相同，该函数就返回0，否则返回非零值
    while(strcmp(try, ANSWER)){
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    
    puts("That's right!");
    
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