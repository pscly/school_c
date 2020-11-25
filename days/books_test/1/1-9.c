#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input_1, blank_count;

    printf("请输入>>:");
    while ((input_1 = getchar()) != EOF)
    {
        if (input_1 == ' ')
        {
            // printf("入");
            if (blank_count)   // todo 等下把这个括号删除了
                continue;
            blank_count++;
            printf("%c", input_1);
            continue;
        }
        blank_count = 0;
        printf("%c", input_1);
    
    }
    
    
    
}