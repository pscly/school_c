#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
    }
    printf("一共有%d行\n", nl);
    
       
}