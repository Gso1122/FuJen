#define _CRT_SECURE_NO_WARNUNGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bs1(int a[]);//bubble sort big to small
void bs2(int a[]);//bubble sort small to big
void Max(int a1[], int a2[]);//compare m1 and m2 which is bigger

void main ()
{
	int m1[50], m2[50], i, m11[50], m21[50];//argument

	srand(time(NULL));//random
	printf("Matrix1\n");
	for (i = 0; i < 50; i++)//matrix1
	{
		m1[i] = 1 + rand() % 99;//range:1~99
		printf("%d\t", m1[i]);
		if ((i+1) % 5 == 0)
			printf("\n");
		m11[i] = m1[i];
	}
	printf("\nMatrix2\n");
	for (i = 0; i < 50; i++)//matrix2
	{
		m2[i] = 1 + rand() % 99;//range:1~99
		printf("%d\t", m2[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
		m21[i] = m2[i];
	}
	bs1(m1);//call function:bubble sort big to small
	bs2(m2);//call function:bubble sort small to big
	Max(m11, m21);//call function:compare m1 and m2 which is bigger

	system("pause");
}
void bs1(int a[])//function:bubble sort big to small
{
	int i, j, t;
	for (i = 0; i < 50 - 1; ++i)//bubble sort:swap
		for (j = 0; j < 50 - 1 - i; ++j)
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	printf("\nMatrix1 big to small\n");
	for (i = 0; i < 50; i++)//print:big to small
	{
		printf("%d\t", a[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
}
void bs2(int a[])//function:bubble sort small to big
{
	int i, j, t;
	for (i = 0; i < 50 - 1; ++i)//bubble sort:swap
		for (j = 0; j < 50 - 1 - i; ++j)
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	printf("\nMatrix2 small to big\n");
	for (i = 0; i < 50; i++)//print:small to big
	{
		printf("%d\t", a[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
}
void Max(int a1[],int a2[])//function:compare m1 and m2 which is bigger
{
	int i = 0, m3[50];
	printf("\nThe Maximun element of Matrix1 and Matrix2\n");
	for (i = 0; i < 50; i++)//compare m1 and m2 , the bigger one store in m3
	{
		if (a1[i] > a2[i])
			m3[i] = a1[i];
		else
			m3[i] = a2[i];
	}
	for (i = 0; i < 50; i++)//print m3
	{
		printf("%d\t", m3[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
}