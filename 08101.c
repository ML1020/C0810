#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	printf("     *�Ұ�*       *ѧϰ*\n"
		"   **�����**   **�Է���**\n"
		" **��Զ����*** ***����˳��**\n");
	//ǰ���п�ֱ����ʾ
	for (i = 0; i<3; i++)//��ʾ�м�����
	{
		for (j = 0; j<29; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i<7; i++)//��ʾ�ʵݼ����ƹ��ɵ��м�7��
	{
		for (j = 0; j<2 * (i + 1) - 1; j++)
			printf(" ");
		for (j = 0; j<27 - i * 4; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i<14; i++)//���һ���Ǻ�*������Ĺ��ɲ�����������ʾ
		printf(" ");
	printf("*\n");
	system("pause");
	return 0;
}