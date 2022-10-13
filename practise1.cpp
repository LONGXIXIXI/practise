#include<stdio.h>             //n阶乘的和
int main()                              //寻找有序数组中的数
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[1]);
	for(i=0;i<sz;i++)
	{
		if(k == arr[i])
		{
		printf("找到了，下标为:%d",1);
		break;
		}
	}
	if(i == sz)
	printf("找不到");
	return 0;
}