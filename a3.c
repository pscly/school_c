#include <stdio.h>
void main()
{
    int num_1, num_2, da_an;
    char da;
    printf("请输入第一个数字");
    scanf("%d", &num_1);

    fflush(stdin);
    //	ffush(stdin);
    printf("请输入第二个数字");
    scanf("%d", &num_2);
    printf("请输入符号");
    // scanf("%s", &da);
    da = getchar();

    printf("da是%s", da);

    switch (da)
    {
    case '*':
        da_an = num_1 * num_2;
        //			printf("a*b=%d",&y);
        break;
    case '/':
        da_an = num_1 / num_2;
        //			printf("a/b=%d",&y);
        break;
    case '+':
        da_an = num_1 + num_2;
        printf("加了");
        //			printf("a+b=%d",&y);
        break;
    case '-':
        da_an = num_1 - num_2;
        //			printf("a-b=%d",&y);
        break;
    default:
        printf("wogan");
    }
    printf("%d%s%d的运算结果为:%d", num_1, da, num_2, &da_an);
}
