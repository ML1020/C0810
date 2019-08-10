#include <stdio.h>
#include <stdlib.h>

int Search(int arr[][4], int k)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == k)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main1(){
	int arr[4][4] = { { 1, 2, 8, 9 },
					 { 2, 4, 9, 12 }, 
					 { 4, 7, 10, 13 },
					 { 6, 8, 11, 15 } };
	int n=Search(arr, 8);
	printf("%d\n", n);
	system("pause");
	return 0;
}