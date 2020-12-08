#include <stdio.h>
int main()
{
    int l1[10]={1,2,3,4,5,6,7,8,9,10};
    int l2[10];
    

    // 方法1
    for (int i=0; i < 10; ++i)
    {
        l2[10-1-i] = i+1; 
    }

    for (int j=0; j <10; ++j){
    printf(" %d ",l2[j]);
    }



}