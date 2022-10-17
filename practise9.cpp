#include<stdio.h>               //找出100-200之间的素数
int main()
{
	int i,count=0;
	for(i=100;i<=200;i++)         //素数：只能被1或自身整除
	{                             
		int j;
		for(j=2;j<i;j++)          //试除法：产生2->i-1
		{
			if(i%j == 0)         //用i取模j，如果为0则不是素数
			{
				break;
			}
		}
		if(j == i)              //j=i时说明i无法被1或自身以外的数整除，为素数
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\ncount=%d",count);
	return 0;
}