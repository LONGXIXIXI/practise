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
	printf("���Լ��Ϊ%d��С������Ϊ%d",b, n/b);
	return 0;
}