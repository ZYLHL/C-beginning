#include<stdio.h>

#define N 10

int main(void)
{
	int a[N], i, temp;

	printf("please input %d integer numbers:\n", N);
	for (i=0; i<N; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("the array before reverse:\n");
	for (i=0; i<N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	/*********Found************/
	for (i=0; i<N/2; i++)
	{
		temp = a[i];
		/*********Found************/
		a[i] = a[N-1-i];
		/*********Found************/
		a[N-1-i] = temp;
	}

	printf("the array after reverse:\n");
	for (i=0; i<N; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");

	return 0;
}
