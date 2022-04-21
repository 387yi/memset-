#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//memset函数的使用
int main()
{
	char arr[] = { "hollw world" };
	memset(arr, '*', 10);//(目标，替换的东西，个数）!!!!
	printf("%s\n", arr);
	return 0;
}