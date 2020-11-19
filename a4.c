#include <stdio.h>

int main()
{
    char c;
    int a1, b1;

    printf("请输入数字");
    scanf("%d", &a1);

    printf("请输入数字");
    scanf("%d", &b1);

    printf("请输入字符：");
    c = getchar();

    printf("输入的字符：");
    putchar(c);

    return (0);
}