/*
 * 在switch语句中使用多重case标签
 *
 * 实现输入大小写效果相同的功能
 * 小写字母后无break，自动流向大写字母的标签
 * 实现功能后break出switch
 */

#include <stdio.h>

int main(void){
    int ch;
    int a_ct, e_ct, i_ct, o_ct, u_ct;
    a_ct = e_ct = i_ct = o_ct = u_ct = 0;
    
    printf("Enter and # to quit");
    
    while((ch = getchar()) != '#'){
        switch (ch)
        {
            case 'a':
            case 'A':
                a_ct++;
                break;
        
            case 'e':
            case 'E':
                e_ct++;
                break;
        
            case 'i':
            case 'I':
                i_ct++;
                break;
        
            case 'o':
            case 'O':
                o_ct++;
                break;
        
            case 'u':
            case 'U':
                u_ct++;
                break;
        
            default:
                break;
        }	// switch 结束
    }
    
    printf("number of vowels:     A    E    I    O    U\n");
    printf("                   %4d %4d %4d %4d %4d", a_ct, e_ct, i_ct, o_ct, u_ct);
    
    return 0;
}
