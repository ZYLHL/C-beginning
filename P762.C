#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
int FindMin (int arr[ ], int N, int *);

int main(void)
{
	int num[10], i, MinVal, MinPos;

	printf("Input 10 integers: ");
	for (i=0; i<10; i++)
	{
		scanf("%d", &num[i]);
	}

	MinVal = FindMin(num, 10, &MinPos);
	printf("\nMinVal=%d MinPos=%d\n", MinVal, MinPos);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int FindMin (int arr[ ], int N, int *p)
{
	int i = 0;
	
	*p = 0;
	for (; i < N ; i++)
	{
		if (arr[i] < arr[*p])
		{
			*p = i;
		}
	}
	return arr[*p];
}
