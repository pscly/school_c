#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    double nc;  // 这个是字符的长度   
    for (nc = 0; getchar() != EOF; ++nc)
    ;
    printf("长度%.0f\n", nc);
    
    


}