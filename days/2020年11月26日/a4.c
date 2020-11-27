#include <stdio.h>
void my1(int x);
int main(int argc, char const *argv[])
{
    /* code */
    int a=10;
    my1(a);
    printf("答案是%d", a);


}
void my1(int x){
    extern int a;
    a++;
    printf("\n+1了\nover是>>%d\n", x);
}

