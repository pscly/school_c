#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input_, kongge = 0, zhibiao = 0, huanhang = 0, zf = 0;
    /* code */
    printf("本程序会统计你输入的东西中有多少个【空格、制表符与换行符个数】的程序\n");
    printf("请输入东西:>>");
    while ((input_ = getchar()) != EOF)
    {
        if (input_ == ' ')
        {
            kongge++;
            continue;
        }
        if (input_ == '\t')
        {
            zhibiao++;
            continue;
        }
        if (input_ == '\n')
        {
            huanhang++;
            continue;
        }
        zf++;

    }

    printf("你一共输入了%d个空格， %d个制表符，  %d个换行， 和%d个字符",kongge,zhibiao,huanhang,zf);
}
