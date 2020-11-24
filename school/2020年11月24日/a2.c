#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int input_num, sum_num;
    sum_num = 0;
    printf("请输入一个数字:");
    scanf("%d", &input_num);
    for (int i = 0; i <= input_num; i++)
    {
        /* code */
        sum_num += i;
    }
    printf("\n答案是:%d", sum_num);
    

}

