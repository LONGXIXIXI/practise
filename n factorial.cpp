#include<stdio.h>
int main()
{
	int a,i=1,p=1;
	scanf("%d",&a);
	while(i<=a)
	{
		p=p*i;
		i++;
	}
	printf("%d",p);
	return 0;
}