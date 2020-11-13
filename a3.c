#include <stdio.h>
void main()
{
    int a, b, y;
    char da;
    printf("请输入第一个数字");
    scanf("%d", &a);

    fflush(stdin);
    //	ffush(stdin);
    printf("请输入第二个数字");
    scanf("%d", &b);
    printf("请输入符号");
    scanf("%s", &da);
    //	printf("")
    switch (da)
    {
    case '*':
        y = a * b;
        //			printf("a*b=%d",&y);
        break;
    case '/':
        y = a / b;
        //			printf("a/b=%d",&y);
        break;
    case '+':
        y = a + b;
        //			printf("a+b=%d",&y);
        break;
    case '-':
        y = a - b;
        //			printf("a-b=%d",&y);
        break;
    }
    printf("%d%s%d的运算结果为:%d", &a, &da, &b, &y);
}
