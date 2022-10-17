#include<stdio.h>                  //从大到小排序
int main()                         //算法实现
{                                  //a中始终放最大值，b次之，c放最小值
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		t=b,b=a,a=t;
		if(a<c)
		{
			t=c,c=a,a=t,t=c,c=b,b=t;
		}
	}
	else if(a>b)
	{
		if(a<c)
		{
			t=a,a=c,c=t,t=c,c=b,b=t;
		}
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}