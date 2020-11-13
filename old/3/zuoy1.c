#include <stdio.h>


int main()
{
    double pi = 3.14159, kuan, gao, he;
    printf("输入圆的第半径>>:");
    scanf("%lf", &kuan);
    printf("输入圆的高>>:");
    scanf("%lf", &gao);

    he = kuan * pi * gao;
    printf("圆的体积是%lf", he);
    ac1();
    return 0;
}

int ac1(){
    printf("\n我是ac1，程序结束时我会出现;");
    return 1;
}
