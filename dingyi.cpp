//dingyi.c-练习定义语句的程序 

#include<stdio.h>

void joll();

void deny();

int main()
{
	printf("\n"); //空格没必要这样加，可以放在定义函数中 
	joll();
	
	printf("\n");
	joll();
	
	printf("\n");
	joll();
	
	printf("\n");
	deny();
	
	return 0;
}
void joll()
{
	printf("我是一个天才！"); 
}
void deny() 
{
	
	printf("真的吗？");
}

