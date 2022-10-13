#include<stdio.h>                            //用二分查找算法找有序数组中的值
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[1]);
	int k=7;
	int left=0;//左下标为0
	int right=sz-1;//右下标为9，即sz-1
	while(left<=right)    //left>right是判断左右下表之间有数
	{
		int mid=(right+left)/2;//中间下标为（左下标+右下标）/2
		if( arr[mid] > k)    //如果arr【中间下标】大于查找值
	  	right=right-1;       //说明查找值在arr【中间下标】左侧，要更改右下标  
 		else if(arr[mid] < k)   //如果arr【中间下标】小于查找值
		left=left+1;         //说明查找值在arr【中间下标】右侧，要更改左下标 
		else                //此时 arr【中间下标】=查找值
		{
		printf("找到了，下标为:%d",mid);
		break;
	} 
		
	}
	if(left>right)
	printf("找不到");
	return 0;
}