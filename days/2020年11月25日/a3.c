#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int c, nl;

    nl = 0;
    printf("请输入>>>:");
    while ((c = getchar()) != EOF){
        printf("+%d+\n", c);
        if (c == '\n'){
            ++nl;
        }
        printf("请继续输入:>>");
        
    }
    printf("一共有%d行\n", nl);
    
       
}