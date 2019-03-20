#include <stdio.h>
#include <string.h>

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=2, lineLen<=80, 考生可在本行后添加代码、最多2行、行长<=80字符) */
int input(char **str1, char (*str2)[9]);
void find(char **str1, int n, int *pp);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

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

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
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
