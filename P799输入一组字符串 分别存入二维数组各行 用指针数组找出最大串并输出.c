#include <stdio.h>
#include <string.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=2, lineLen<=80, �������ڱ��к���Ӵ��롢���2�С��г�<=80�ַ�) */
int input(char **str1, char (*str2)[9]);
void find(char **str1, int n, int *pp);
/* User Code End(������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	char *pStr[50], str[50][9];
	int Count=0, max;
	
	printf("****Input strings****\n");
	Count = input(pStr, str);

	printf("\nmax = ");
	find(pStr, Count, &max);
	printf("%s\n", pStr[max]);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int input(char **str1, char (*str2)[9])
{    
	int i;     

	for (i = 0; i < 50; i++) 
	{  
		//gets(str2[i]);
		scanf("%s", str2[i]);  
		if (strcmp(str2[i], "*End*") == 0)         
		{
			break;
		}
		str1[i] = str2[i];      	    
	}
    
	return i;
}

void find(char **str1, int cnt, int *pp)
{
	int i;

	*pp = 0;
	for (i = 1; i < cnt; i++)
	{    
		if (strcmp(*(str1 + i), *(str1 + *pp)) > 0)
		{
			*pp = i;
		}
	}
}
