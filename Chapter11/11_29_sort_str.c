/*
 * 读入字符串，并排序字符串
 */

#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 20
#define HALT ""

void stsrt(char *strings[], int num);
char *s_gets(char *st, int n);

int main(void){
    char input[LIM][SIZE];
    char *pstr[LIM];
    int ct = 0; // the counter of inputs
    int k = 0; // the counter of outputs
    
    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the ENTER key at a line's start.\n");
    
    while(ct<LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0'){
        // pstr存放了input里每一行首字母的地址
        pstr[ct] = input[ct];
        ct++;
    }
    
    stsrt(pstr, ct);
    
    puts("Here are the sorted lines:");
    for(k = 0; k < ct; k++){
        puts(pstr[k]);
    }
    
    return 0;
}


void stsrt(char *strings[], int num){
    char *temp;
    int top, seek;
    
    for(top=0; top<num-1; top++){
        for(seek = top+1; seek < num; seek++){
            if(strcmp(strings[top], strings[seek]) > 0){
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }
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