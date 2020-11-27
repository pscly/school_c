#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int input_str;
    int str_len;
    for (str_len = 0; ((input_str=getchar()) != EOF); str_len++)
    {
        /* code */
        if (input_str == ' ')
            break;
        if (input_str =='\n')
            break;
        printf("%c", input_str);
    }
    printf("\n有效字符串长度为%d\n", str_len);
    
}

