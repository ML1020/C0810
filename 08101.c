#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	printf("     *我爱*       *学习*\n"
		"   **身体棒**   **吃饭香**\n"
		" **永远开心*** ***事事顺心**\n");
	//前三行可直接显示
	for (i = 0; i<3; i++)//显示中间三排
	{
		for (j = 0; j<29; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i<7; i++)//显示呈递减趋势规律的中间7排
	{
		for (j = 0; j<2 * (i + 1) - 1; j++)
			printf(" ");
		for (j = 0; j<27 - i * 4; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i<14; i++)//最后一个星号*与上面的规律不符，独立显示
		printf(" ");
	printf("*\n");
	system("pause");
	return 0;
}