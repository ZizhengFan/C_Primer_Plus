/*
 * 读取整行输入并用空字符代替换行符，
 * 或者读取一部分输入，并丢弃其余部分
 */

#include <stdio.h>

char *s_gets(char *st, int n);

int main(void){
    char mystring[20];
    while(s_gets(mystring, 20) != NULL){
        printf("%s\n", mystring);
    }
    
    return 0;
}


char *s_gets(char *st, int n){
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin); // fget会保留读到的换行符！！！
    
    if(ret_val){ // 如果ret_val不是空指针，这进行操作
        
         while(st[i] != '\n' && st[i] != '\0'){ // 找到第一个换行符或空字符的位置
             i++;
         }
         
         if(st[i] == '\n'){ // 如果i这个位置的字符是换行符，则用空字符代替之
             st[i] = '\0';
         }else{ // 如果i这个位置的最
             
             while(getchar() != '\n'){
                 continue;
             }
         }
         
    }
    
    return ret_val;
}