//调用定义函数完成输出
#include<stdio.h> 

void br();
void ic();

int main()
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();
	
}

void br()
{
	printf("Brazil,Russia");
}

void ic()
{
	printf("India,China");
}
