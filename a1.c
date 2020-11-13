#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */

    int n_1, n_2, da;
    char fh;

    /* code */
    printf("请输入数字");
    scanf("%d", &n_1);

    printf("请输入数字");
    scanf("%d", &n_2);

    
    printf("请输入运算符");
    fh = getchar();
    

    switch (fh)
    {
    case '*':
        /* code */
        da = n_1 * n_2;

        break;

    case '+':
        /* code */
                da = n_1 + n_2;
        break;

    case '-':
        /* code */
                da = n_1 - n_2;
        break;

    case '/':
        /* code */
                da = n_1 / n_2;
        break;

    default:
        break;
    }

    printf("%d%s%d的答案是%d", n_1,fh, n_2, da);
}
