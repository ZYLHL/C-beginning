#include<stdio.h>

int main(void)
{
        /*********Found************/
        char yy[128] = {0};int i = 0;

        /*********Found************/
        while ((yy[i] = getchar()) != '\n') i++;

        /*********Found************/
        printf("%s", yy);

	return 0;
}
