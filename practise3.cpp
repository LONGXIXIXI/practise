#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[]="welcome to peiking university";
	char arr2[]="#############################";
	int left=0;
	int right=strlen(arr1)-1;
	for(;left<=right;left++,right--)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		system("cls");       //ִ��ϵͳ�����һ������-cls �������Ļ
		printf("%s\n",arr2);
		Sleep(1000);        //��Ϣһ��
		
	}
	return 0;
}