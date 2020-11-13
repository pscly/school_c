#include<stdio.h>
#include<string.h>
int login()/*输入密码登陆系统，诺三次输入不正确，则退出*/
{
	char secretCode[7], ch;
	int i, number = 3;
	printf("\n\n\n");
	printf("\t\t\t*****欢迎使用学生成绩管理系统*****、n");
	printf("\n\n");
	while (number>0)
	{
		i = 0;
		printf("\n\t\t\t请输入密码：");
		while ((ch=getch())!= 13)
		{
			secretCode[i++] = ch;
				printf("*");
		}
		secretCode[i] = '\0';
		if (strcmp(secretCode, "88888") == 0)break;
		else
		{
			number--;
			if (number <= 0)break;
			printf("\n\n\t\t\t你还有d次机会\n", number);
			}
		}
	if (number > 0)return 1;
	else return 0;
	}
       mainMenu()/*系统柜主菜单，需要以后添加*/
		   {
		   system("cls");
		   printf("\n\n\n\t\t\t*****学生成绩管理系统*****\n");
		   getch();
	        }
	   main()
	   {
		   if (!login())
		   {
			   printf("\n\n\t\t恒遗憾，欢迎您下次再来！\n");
			   return 1;
		   }
		   do
		   {
			   mainMenu();
		   } while (1);

}
