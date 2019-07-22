#include <stdio.h>
#include <stdlib.h>

int f(int x, int y)
{
	return (x&y) + ((x^y) >> 1);
}

void fun(int x, int y, int *c, int *d)
{
	*c = x + y;
	*d = x - y;
}

int main()
{
	/*int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = a;
	int i;
	a[p - a];
	a[10];*/

	//int result = f(2, 4);//0010 0100
	//printf("%d\n", result);//3

	//int a = 4, b = 3, c = 0, d = 0;
	//fun(a, b, &c, &d);
	//printf("%d %d\n", c, d);//7 1

	int arr[8] = { 1, 3, 5, 7, 1, 3, 5, 9 };
	int num[255] = { 0 };
	int i;
	for (i = 0; i < 8; i++)
	{
		num[arr[i]]++;
	}
	for (i = 0; i < 8; i++)
	{
		if (num[arr[i]] == 1)
		{
			printf("%d\n", arr[i]);
		}
	}
	system("pause");
	return 0;
}