#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func1(float*, float*, float*, float*);//Calculate y
void func2(float*, float*, float*, float*, float*);//Calculate distance
 
//Calculate y=ax+b
int main()
{
	float a, b, x1, x2, y1, y2, d = 0;
	float *pa = &a, *pb = &b, *px1 = &x1, *px2 = &x2, *py1 = &y1, *py2 = &y2, *pd = &d;

	printf("Please input a,b for line y = ax + b\n");
	scanf("%f%f", pa, pb);//input value
	printf("Please input two point of x\n");
	scanf("%f%f", px1, px2);//input x value

	func1(pa, px1, pb, py1);//Calculate y1
	func1(pa, px2, pb, py2);//Calculate y2

	printf("The points on line y = %.2f*x + %.2f are (%.2f , %.2f) and (%.2f , %.2f)\n", *pa, *pb, *px1, *py1, *px2, *py2);

	func2(px1, px2, py1, py2, pd);//Calculate distance
	printf("The distance of two points is %.2f\n", *pd);

	system("pause");//finish
	return 0;
}
void func1(float *q, float *w, float *e, float *py1)//define calculation y
{
	*py1 = *q**w + *e;
}
void func2(float *x1, float *x2, float *y1, float *y2, float *r)//define calculation distance
{
	*r = sqrt(pow((*x1 - *x2), 2) + pow((*y1 - *y2), 2));
}