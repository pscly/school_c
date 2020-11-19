#include <stdio.h>
void main()
{
    int a1, b1, y1;
    char fh;
    fh = '+';

    while (1)
    {

        printf("请输入数字");
        scanf("%d", &a1);

        printf("请输入数字");
        scanf("%d", &b1);

            
        printf("请输入运算符");
        fh = getchar();
        
        printf("结束1");

        switch (fh)
        {
        case '*':
            /* code */
            y1 = a1 * b1;

            break;

        case '+':
            /* code */
            y1 = a1 + b1;
            break;

        case '-':
            /* code */
            y1 = a1 - b1;
            break;

        case '/':
            /* code */
            y1 = a1 / b1;
            break;

        default:
            break;
        }

        // switch (fh)
        // {
        // case '*':
        //     y1 = a1 * b1;
        //     //			printf("a*b=%d",&y);
        //     break;
        // case '/':
        //     y1 = a1 / b1;
        //     //			printf("a/b=%d",&y);
        //     break;
        // case '+':
        //     y1 = a1 + b1;
        //     //			printf("a+b=%d",&y);
        //     break;
        // case '-':
        //     y1 = a1 - b1;
        //     //			printf("a-b=%d",&y);
        //     break;
        // default:
        //     break;
        // }
        printf("%d%s%d的运算结果为:%d\n", a1, fh, b1, y1);
    }
}
