#include<stdio.h>
int main()
{
	int a, b,r, n;
	scanf_s("%d%d", &a, &b);
	if (a < b);
	int t = a; a = b, b = t;
	n = a * b;
	r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	printf("最大公约数为%d最小公倍数为%d",b, n/b);
	return 0;
}