#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体大小计算
//typedef struct 
//{
//	int a;//0-3
//	char b;//4
//	//5
//	short c;//6-7
//	short d;//8-9
//	//10-11
//}S;//一共12字节4的倍数
//int main()
//{
//	printf("%d\n", sizeof(S));//12字节
//	return 0;
//}


//32位编译器；默认4对齐数
//typedef struct 
//{
//	int a;//0-3
//	short b;//4-5
//	//6-7
//	int c;//8-11
//	char d;//12
//	//13-15
//}A;//一共16字节4的倍数
//typedef struct
//{
//	int a;//0-3
//	short b;//4-5
//	char c;//6
//	//7
//	int d;//8-9
//	//10-11
//}B;//一共12字节4的倍数
//
//int main()
//{
//	printf("%d\n", sizeof(A));//16字节
//	printf("%d\n", sizeof(B));//12字节
//	return 0;
//}


