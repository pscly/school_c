#include <stdio.h>
int main()
{
    int ceng;
    printf("请输入层数>>:");
    scanf("%d", &ceng);   
    printf("\n");
    for (int i = 0; i < ceng; i++)
    {
/*
4
    1           4   1
   111          3   3
  11111         2   5  
 1111111        1   7

4-0 + (0*2)+1
4-1 + (1*2)+1
4-2 + (2*2)+1
4-3 + (4*2)+1
*/

    for (size_t j = 0; j < ceng - i; j++)
        printf(" ");    
    for (size_t j = 0; j < (i*2)+1; j++)
        printf("*");
    printf("\n");

    }
       
}