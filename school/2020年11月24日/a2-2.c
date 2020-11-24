#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int input_num, sum_num;
    int new_input_num=0;
    int now_num=0;
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

    int x = 1;
    while (1)
    {   
        sum_num += input_num+x;

        input_num--;
        x++;
        if (x>input_num)
        {
            /* code */
            break;
        }
        
    }
    if (new_input_num)
    {
        /* code */
        sum_num += new_input_num;
    }
    
    
    printf("%d", sum_num);
    
    

}

