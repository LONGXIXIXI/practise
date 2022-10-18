#include<stdio.h>              //1-100中9的个数
int main()
{
	int i,count=0;
	for(i=1;i<=100;i++)
	{
		if(i%10 == 9)
		{
			count++;
		}
		if(i/10 == 9)
		{
			count++;
		}
	}
	printf("count=%d",count);
	return 0;
}