#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    long nc;    // 这个是字符的长度   

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("长度%ld\n", nc);    
    

}