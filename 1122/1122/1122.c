#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	float r, s, l;
//	printf("请输入圆的半径：\n");
//	scanf("%f", &r);
//	s = 3.14*r*r;
//	l = 2 * 3.14*r;
//	printf("圆面积为：%f\n", s);
//	printf("圆周长为：%f\n", l);
//
//	return 0;
//}
//int main()
//{
//	int num1, num2;
//	printf("请输入两者整数：\n");
//	scanf("%d%d", &num1, &num2);
//	printf("和：%d\n", num1 + num2);
//	printf("差：%d\n", num1 - num2);
//	printf("积：%d\n", num1 * num2);
//	printf("商：%d\n", num1 / num2);
//	printf("商：%0.2f\n",(float)num1 /(float)num2);
//	printf("余：%d\n", num1 % num2);
//	return 0;
//}
//int  main()
//{
//	int num;
//	printf("请输入一个整数：\n");
//	scanf("%d", &num);
//	printf("第一个结果:%d\n", --num);
//	printf("第二个结果:%d\n",(++num) + (num++)*(num--));
//
//
//	return 0;
//}
//int main()
//{
//	int num;
//	printf("请输入一个整数：\n");
//	scanf("%d",&num);
//	printf("结果：%d\n",--num);
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b','c','\0'};
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[9] = { 0 };
//	int z=0;
//	z = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", z);
//	//int a = 10;
//	//printf("%d\n", a);
//	//printf("%d\n", !a);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//	return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = Max(a , b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//
//	return 0;
//}
//int main()
//{
//	typedef int t;
//	t a = 10;
//	t b = 20;
//	printf("%d\n", (a - b >0? a : b));
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("==%d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sun = Add(a, b);
//	printf("sun=%d\n", sun);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//    //printf("%p\n", &a);
//	int*p = &a;
//	printf("%d\n", sizeof(p));
//	return 0;
//}
//int main()
//{
//	int num;
//	int a, b, c;
//	printf("输入一个三位数：\n");
//	scanf("%d", &num);
//	a = num % 10;
//	b = num / 10 % 10;
//	c = num / 100;
//	printf("%d\n", 100*a +  10*b + c);
//	return 0;
//}
//int main()
//{
//	double t = 3.14;
//	double*p = &t;
//	printf("%f\n", t);
//	return 0;
//}
//#include <string.h>
//struct book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct book A = { "自传", 35 };
//		//printf("书名是%s\n", A.name);
//		struct book*a = &A;
//		strcpy(A.name, "我爱你");
//		printf("书名是%s\n", a->name);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int  ch;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}
//int main()
//
//{
//	int a;
//	int ch;
//	char M[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf("%s", &M);
//	while ((a = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认Y/N\n");
//	ch=getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; ; a++)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}
int main()
{
	int a[n] = 1;
	do
	{
		printf("%d\n", a*a++);
		a++;
	}
	while (a <= );

	return 0;
}