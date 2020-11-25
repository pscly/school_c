#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    // ？？？ 为啥可以 输入多个字符？  c既可以是int 也可以是char

    int c;
    printf(">>>");
    c = getchar();
    while (c != EOF)
    {
        /* code */
        putchar(c);
        c = getchar();
    }
    

}