#include <stdio.h>
int main()
{
    int l1[10]={1,2,3,4,5,6,7,8,9,8};
    int max=l1[0],min=l1[0];

    for (size_t i = 0; i < 10; i++)
    {
        if (l1[i]>max)
            max = l1[i];
        if (l1[i]<min)
            min = l1[i];      
    }
    printf("最大%d,最小%d", max,min);
    
    
}