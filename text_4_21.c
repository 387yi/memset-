#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//memset������ʹ��
int main()
{
	char arr[] = { "hollw world" };
	memset(arr, '*', 10);//(Ŀ�꣬�滻�Ķ�����������!!!!
	printf("%s\n", arr);
	return 0;
}