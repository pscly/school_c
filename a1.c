#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */

    float user_money, shui;

    printf("请输入你的工资>>:");
    scanf("%f", &user_money);

    shui = user_money > 1000 ? (user_money - 1000) * 0.05 : 0;

    printf("你交了%.2f的税,拿到了%.2f", shui, user_money-shui);
}
