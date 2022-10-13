#include<stdio.h>             //n阶乘的和
int main()
{
	int p=1,i=0,ret=1,sum=0;
	while(p<=3)
	{
		for(i=1,ret=1;i<=p;i++)
		{
			ret=ret*i;
		}
		p++;
		sum=sum+ret;
	}
	printf("%d\n",sum);
	return 0;
}