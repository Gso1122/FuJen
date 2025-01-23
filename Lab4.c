#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int student[2][20], i, j, n, swap = 0, all[20];
	float avg, avg_all = 0;
	srand(time(NULL));

	for (i = 0; i < 2; i++)
	{
		avg = 0;
		printf("一年%d班\n", i + 1);
		for (j = 0; j < 20; j++)
		{
			student[i][j] = rand() % 101;
			printf("%d\t", student[i][j]);
			if ((j + 1) % 5 == 0)
				printf("\n");
			avg += student[i][j];
			avg_all += student[i][j];
		}
		printf("1年%d班的平均成績：%f\n", i + 1, avg / 20);
	}
	printf("一年級的總平均值：%.3f\n", avg_all / 40);

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 20; j++)
		{
			for ( n = j; n < 20; n++)
			{
				if (student[i][n] > student[i][n+1]) {
				swap = student[i][n+1];
				student[i][n+1] = student[i][n];
				student[i][n] = swap;
				}
			}
		}
		printf("1年%d班的前三名排序：\n", i + 1);
		printf("最高分  :%d分\n", student[i][19]);
		printf("第二高分:%d分\n", student[i][18]);
		printf("第三高分:%d分\n", student[i][17]);
		printf("*******************\n");
	}
	
	system("pause");
	return 0;
}	