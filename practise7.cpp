#include<stdio.h>                 //两个数的最大公约数
int main()
{
	int m,n,r;
	scanf("%d%d",&m,&n);
	while(r=m%n)
	{
		m=n;
		n=r;
	}
	printf("%d",n);
	return 0;
}