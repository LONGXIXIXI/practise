#include<stdio.h>
int main()
{
	int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	int sz=sizeof(arr)/sizeof(arr[1]);
	int max=arr[0];
	int i;
	for(i=0;i<sz;i++)
	{
		if(arr[i] > max)
		{
			max=arr[i];
		}
	}
	printf("max=%d",max);
	return 0;
}