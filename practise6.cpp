#include<stdio.h>          //打印3的倍数
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%3 == 0)
		{
		printf("%d ",i);
	    } 
	}
	return 0;
}