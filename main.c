#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char a1;
    printf("input>>");
    while (a1=getchar())
    {
   
        
        switch (a1)
        {

        case 'a':
            /* code */
            printf("他是a， 他是元音\n");
            break;            
        case 'e':
            printf("他是e， 他是元音\n");
            break;            
        case 'i':
            printf("他是i， 他是元音\n");
            break;            
        case 'o':
            printf("他是o， 他是元音\n");
            break;
        case 'u':
            printf("他是u， 他是元音\n");
            break;

        default:
            printf("啥也不是");
            break;
        }
    }

    return 0;
}
