#include <stdio.h>
// #define CISHU 5
int main()
{
    float results[5] = {};

    int zt = 0;
    for (int i = 0; i < 5; i++)
    {
        if (zt == 1){
            printf("%.1f+", results[(5-1)-i]);
            continue;
        }

        printf("\n请输入同学%d成绩:", i+1);
        scanf("%f", &results[i]);
        if (i == 4)
            zt = 1;
            i = -1;
    }

    
    

    
}