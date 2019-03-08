#include <stdio.h>

int main(void)
{

	int dan = 2;
	int num = 0;

	do
	{
		num = 1;
		do
		{
			printf("%dx%d=%d \n", dan, num, dan*num);
			num++;

		} while (num < 10);
			dan++;
	} while (dan < 10);

	return 0;
}
		