/*
 * 该程序读入一个字母，然后打印出与该字母开头的动物名
 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    int ch;
    int temp = 0;
    
    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter, type # to end my act.\n");
    
    while((ch = getchar()) != '#'){
        if(ch == '\n'){
            continue;
        }
        
        if(islower(ch)){
            
            switch(ch){
                case 'a':
                    printf("argali, a wild sheep of Asia\n");
                    break;
                
                case 'b':
                    printf("babirusa, a wild pig of Malay\n");
                    break;
                
                case 'c':
                    printf("coati, racoonlike mammal\n");
                    break;
                
                case 'd':
                    printf("desman, aquatic, molelike critter\n");
                    break;
                
                case 'e':
                    printf("echidna, the spiny anteater\n");
                    break;
                
                case 'f':
                    printf("fisher, brownish marten\n");
                    break;
                
                default:
                    printf("That's stumper!\n");
            }    /* switch 结束 */
        }else{
            printf("I recognize only lowercase letters.\n");
        }
        
        // 接收到一个非空白换行ch后，继续getchar
        // 如果继续getchar得到的数据是空白就用while吃掉
        // 如果不是空白就continue到大循环while，继续接收ch
        while((temp = getchar()) != '\n'){
            // continue;
            ;
        }
      
        printf("\nPlz type another letter or a #: \n");
    
    }
    
    printf("Bye~~");
    
    return 0;
}
