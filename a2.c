#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    // 测试EOF

    char input_char_1, input_char_2;

    printf("请输入一个字符");
    
    input_char_1 = getchar();
    if (input_char_1 == EOF)
    {
        printf("这个是EOF");
    }
    printf("============程序结束============");


}

