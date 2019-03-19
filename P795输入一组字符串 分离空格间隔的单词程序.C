 //P795从键盘上输入多个字符串(约定每个串不超过8个字符且没有空格，最多50个字符串)，用“*End*”作为输入结束的标记(“*End*”不作为有效的字符串)。再从所输入的若干字符串中，找出一个最大的串，并输出该串。
#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
int split (char *str, char **pStr);

int main(void)
{
	char str[200], *pStr[101];
	int i=0, count;

	printf("Please input a string: ");
	gets(str);

	count = split(str,  pStr);
	printf("\n%d Words: ", count);
	for (i=0; i<count; i++)
	{
		printf("%s-", pStr[i]);
	}
	putchar('\n');

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int split (char *str, char **pStr)
{
	int i, j = 0, cnt = 0, flag = 0;
	
	for (i = 0; 0 != *(str + i); i++)
	{
		if (32 != *(str + i) && (!flag))
		{
			*(pStr + j) = (str + i);
			flag++;
			continue;
		}
		else if (32 != *(str + i))
		{
			continue;
		}
		else if (32 == *(str + i) && (flag))
		{
			flag = 0;
			*(str + i) = '\0';
			j++;
			cnt++;
			continue;
		}
	}
	if (32 != *(str + i - 1) && '\0' != *(str + i - 1))
	{
		cnt++;
	}
	return cnt;
}
