#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int input_num, sum_num;
    int new_input_num = 0;
    int now_num = 0;
    sum_num = 0;
    printf("请输入一个数字:");
    scanf("%d", &input_num);
    if (input_num % 2)
    {
        /* 奇数数 code */
        new_input_num = input_num--;
    }

    //  4+1 3+2 2+3 1+4 0+5  // 不对，重复了
    //  4+1 3+2 + 5

    // input：6
    // 6+5+4+3+2+1
    // 6+1 + 5+2 + 4+3
    // input：7
    // 7+6+5+4+3+2+1
    // 6+1 + 5+2 + 4+3 + 7

    int num_hou_x = 1, cheng = 0, cheng_num = 0; // 这个是后面的数字
    while (1)
    {
        // sum_num += input_num + num_hou_x;    // 计算部分

        // 如果还要加速计算的话， 最好的办法就是把他们存到一个地方，然后 *
        cheng_num = input_num + num_hou_x;
        cheng++;

        input_num--;
        num_hou_x++;
        if (num_hou_x > input_num)
        {
            break;
        }
    }
    sum_num = cheng * cheng_num;

    if (new_input_num)
    {
        /* code */
        sum_num += new_input_num;
    }

    printf("%d", sum_num);
}
