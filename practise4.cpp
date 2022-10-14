#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char password[20]={0};
	int i=0;
	for(i=0;i<3;i++)
	{
	printf("请输入密码:");
	scanf("%s",password);
	if(strcmp(password,"123456") == 0)   //==不能用于字符串之间的比较，应该使用一个库函数：strcmp
	{
		printf("登录成功\n");
		break;
	}
	else
	{
	printf("密码错误\n");
	}
}
	if(i == 3)
	printf("没机会了\n");
	return 0;
}