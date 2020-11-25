#include <stdio.h>

/*
编写一个将输入复制(打印)到输出的程序，
并将其中的制表符替换为\t,把回退符替换为\b，把反斜杠替按为\\。
这样可以将制表符和回退符以可见的方式显示出来。
 */

int main(int argc, char const *argv[])
{
    int input_1;

    printf("请输入>>:");
    while ((input_1 = getchar()) != EOF)
    {
        if (input_1 == '\t')
        {
            printf("\\t");
            continue;
        }
        if (input_1 == '\b')
        {
            printf("\\b");
            continue;
        }
        if (input_1 == '\\')
        {
            printf("\\\\");   
            // putchar('\\\\');   // 也可以
            continue;
        }    
        printf("%c", input_1);
    
    }
    
    
    
}