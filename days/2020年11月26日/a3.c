#include <stdio.h>
#define MAXLINE 1000 /* 文本最长的长度 */
// 输入文本， 然后打印最长文本
int func_getline(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */
int main()
{
    int len;                   // 当前行的长度
    int max;                   // 最长行的长度
    char now_line[MAXLINE];    // 当前行的文字
    char max_longest[MAXLINE]; // 最长行的文字
    max = 0;
    while ((len = func_getline(now_line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(max_longest, now_line);
        }
    if (max > 0) /* there was a line */
        printf("\n东西是:%s", max_longest);
    printf("\n长度%d", max);
    return 0;
}
/* getline:  read a line into s, return length  */
int func_getline(char s[], int lim)
{
    int c, i;
    //         i < 999 i <= 998
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;       // 把字符先放入字符串中
    if (c == '\n')      // 末尾如果是\n
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}
/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
