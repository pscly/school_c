#include <stdio.h>
int main()
{
    int l1[15];

    for (size_t i = 0; i < 15; i++){
        scanf("%d", &l1[i]);}

    printf("列表----");
    for (int j=0; j <15; ++j){
    printf(" %d ",l1[j]);
    }
    printf("列表----");
    
    for (size_t i = 0; i < 15; i++)
    {
        if (l1[i] == 10){
            printf("\n10在第%d,位", i+1);}

    }
    
    printf("over");
}