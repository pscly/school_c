#include <stdio.h>
#include <stdlib.h>
// #define NUM_0 6
int main(int argc, char const *argv[])
{
    /* code */
    int num_1, input_num;
    long ran = 10;
    num_1 = 10;
    input_num = num_1 + 1;
    printf("这个是猜数游戏（猜到答案就会退出）:");
    while (input_num != num_1)
    {
        scanf("%d", &input_num);

        if (input_num > num_1){
            printf("大了\n");
        }
        if (input_num < num_1){
            printf("小了\n");
        }
        printf("请重新输入数字>:");
    }
}
