#include <stdio.h>
// #define CISHU 5
int main()
{
    float results[5] = {};

    for (size_t i = 0; i < 5; i++)
    {
        printf("\n请输入同学%d成绩:", i);
        scanf("%f", &results[i]);
        
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%.1f+", results[5-1-i]);
    }
    
    

    
}