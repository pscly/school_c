#include<stdio.h>
#include<string.h>
int login()/*���������½ϵͳ��ŵ�������벻��ȷ�����˳�*/
{
	char secretCode[7], ch;
	int i, number = 3;
	printf("\n\n\n");
	printf("\t\t\t*****��ӭʹ��ѧ���ɼ�����ϵͳ*****��n");
	printf("\n\n");
	while (number>0)
	{
		i = 0;
		printf("\n\t\t\t���������룺");
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
			printf("\n\n\t\t\t�㻹��d�λ���\n", number);
			}
		}
	if (number > 0)return 1;
	else return 0;
	}
       mainMenu()/*ϵͳ�����˵�����Ҫ�Ժ����*/
		   {
		   system("cls");
		   printf("\n\n\n\t\t\t*****ѧ���ɼ�����ϵͳ*****\n");
		   getch();
	        }
	   main()
	   {
		   if (!login())
		   {
			   printf("\n\n\t\t���ź�����ӭ���´�������\n");
			   return 1;
		   }
		   do
		   {
			   mainMenu();
		   } while (1);

}
