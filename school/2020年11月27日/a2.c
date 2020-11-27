#include <stdio.h>
#define MAX_NUM 100
int main(int argc, char const *argv[])
{
    int sum_num = 0;
    for (int i = 0; i < MAX_NUM; i++)
    {
        if ((i % 10) == 3)
            continue;
        sum_num += i;
    }
    printf("答案是%d", sum_num);
}
