#include<stdio.h>             //�˷��ھ���
int main()
{
	int i;
	for(i=1;i<=9;i++)
	{
		int j;
		for(j=1;j<=i;j++)
		{
		printf("%d*%d=%-2d ",i,j,i*j);   //-2���������
	    }
		printf("\n");
	}
	return 0;
}