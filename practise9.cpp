#include<stdio.h>               //�ҳ�100-200֮�������
int main()
{
	int i,count=0;
	for(i=100;i<=200;i++)         //������ֻ�ܱ�1����������
	{                             
		int j;
		for(j=2;j<i;j++)          //�Գ���������2->i-1
		{
			if(i%j == 0)         //��iȡģj�����Ϊ0��������
			{
				break;
			}
		}
		if(j == i)              //j=iʱ˵��i�޷���1�������������������Ϊ����
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\ncount=%d",count);
	return 0;
}