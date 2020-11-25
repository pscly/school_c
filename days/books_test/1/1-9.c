#include <stdio.h>

/*
编写一个将输入复制(打印)到输出的程序，并将其中连续的多个空格用一个空格代替
*/

int main(int argc, char const *argv[])
{
    int input_1, blank_count;

    printf("请输入>>:");
    while ((input_1 = getchar()) != EOF)
    {
        if (input_1 == ' ')
        {
            // printf("入");
            if (blank_count)   // todo 等下把这个括号删除了(好吧，这个功能压根没有用到， 我还想说把取反的!给取消掉来着)
                continue;
            blank_count++;
            printf("%c", input_1);
            continue;
        }
        blank_count = 0;
        printf("%c", input_1);
    
    }
    
    
    
}