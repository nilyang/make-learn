#include<stdio.h>
#include"std.h"

int main(int argc,char *argv[])
{
	int left=23,right=33;
	float r;
	printf("加法：add(%d,%d)=%ld\n", left,right,add(left,right));
	printf("请输入一个半径:");
	scanf("%f",&r);
	printf("半径 = %f\n", r);
	printf("面积 = %f\n", my_area(r));

	return 0;
}
