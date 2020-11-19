#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */

    int n_1, n_2, da;
    char fh;

   
    printf("请输入运算符");
    scanf("%s", &fh);
    

    /* code */
    printf("请输入数字");
    scanf("%d", &n_1);

    printf("请输入数字");
    scanf("%d", &n_2);
    printf("%d%s%d的答案是%d", n_1,fh, n_2, da);

 

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
        printf("%d%s%d的答案是%d", n_1,fh, n_2, da);
        break;
    }

    printf("%d%s%d的答案是%d", n_1,fh, n_2, da);
}
