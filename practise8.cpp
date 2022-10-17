#include<stdio.h>            //1000到2000中的闰年
int main()
{
	int year;
	int count=0;              //计数，有多少给闰年
	for(year=1000;year<=2000;year++)    //闰年的判断  能被4整除且不能被100整除
	{
		if(year%4 == 0 && year%100 != 0)
		{
		printf("%d ",year);
		count++;
	    }
	    else if(year%400 == 0)          //能被400整除
	    {
	    printf("%d\n",year);
	    count++;
	    }
	}
	printf("一共有%d个润年",count);
	return 0;
}