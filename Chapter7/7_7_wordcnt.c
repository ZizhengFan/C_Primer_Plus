/*
 * 编写一个统计单词数量的程序
 * 该程序还可以计算字符数和行数
 *
 * 首先，该程序要逐个字符读取输入，知道何时停止读取。
 * 然后，该程序能识别并计算这些内容：字符、行数和单词
 *
 * | 作为输入的末尾标记
 * 必须定义什么是该程序识别的单词。我们用一个相对简单的方法，把一个单词定义为一个不含空白（即，没有空格、制表符或换行符）的字符序列
 * 使用ctype.h头文件中的函数isspace()更简单，如果该函数的参数 是空白字符，则返回真
 *
 * 要查找一个单词里是否有某个字符，可以在程序读入单词的首字符时把一个标记（名为 inword）设置为1。
 * 也可以在此时递增单词计数。然后，只要inword为1（或true），后续的非空白字符都不记为单词的开始。下一个空白字符，必须重置标记为0（或false），
 * 然后程序就准备好读取下一个单词
 *
 */

/*
 * 伪代码：
 *
 * 大循环：getchar读字符给c，不为STOP就继续循环
 *
 * 小判断：刚读进来的c是回车吗？
 * 如果是，则意味着行数加一
 *
 * 中判断：刚读进来的c是空白字符（空格，缩进，回车）吗？
 * 如果是，则意味着现在面临几种可能：一种是，这是单词和单词之间的空白，一行还会继续；
 * 一种是，这是换行的标志（注意！换行我们在上一个小判断里已经处理过了）
 *
 * 我们会用一个标志inword来标志现在是否在记录单词，因为句子都是由单词构成的
 * 小判断：如果这个空格出现在单词中，这意味着单词结尾了
 *
 * 中判断：刚读进来的c不是空白字符，且现在没在单词中，意味着这是下一个单词的开始
 *
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void){
    int c = 0; // 用来在循环里接收字符
    int prev = '\n'; // 用来判断是否有不完整的一行，也就是末尾不以换行符结尾的一行
    
    long n_chars = 0L; // The number of chars
    int n_lines = 0; // The number of lines
    int n_words = 0; // The number of words
    
    bool is_p_line = false; // The number of partial or fractial lines
    bool inword = false; //  意思还是判断现在这一刻读入的字符c，究竟是不是一个单词的一部分
    
    printf("Enter: \n");
    
    while((c = getchar()) != STOP){
        n_chars++;
    
        if(c == '\n'){
            n_lines++;
        }
    
        if(!isspace(c) && !inword){ // 如果此时c不是空格，c也没在单词里面，那么证明c是一个单词的开头
            inword = true; // 现在的c是单词的开头，我们要开始记录一个单词了
            n_words++;
        }
    
        if(isspace(c) && inword){ // 如果此时c是空格，且c在单词里，证明此时的空格c是这个单词的结尾
            inword = false; // 现在的c是单词的结尾，我们把inword置非
        }
    
        prev = c; // 用prev记录此时这个c
        
    }
    
    // 此时c为'|'， prev为'|'前一个字符，我们根据这个来判断这行是不是完整
    // 除非我们给停止符号'|'单独另起一行，不然p_lines一直会是1
    if(prev != '\n'){
        is_p_line = 1;
    }
    
    printf("characters = %ld, words = %d, lines = %d\n", n_chars, n_words, n_lines);
    printf("partial line? = %d\n", is_p_line);
        
    
    return 0;
}
