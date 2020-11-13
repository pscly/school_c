#include <stdio.h>

void main()
{
    float f_1_cang, f_1_kuan, f_1_gao;
    printf("请输入长方形的长:");
    scanf("%f", &f_1_cang);
    printf("\n请输入长方形的宽:");
    scanf("%f", &f_1_kuan);
    printf("\n请输入长方形的高:");
    scanf("%f", &f_1_gao);

    printf("答案是%.2f\n", f_1_cang * f_1_gao * f_1_kuan);
}


