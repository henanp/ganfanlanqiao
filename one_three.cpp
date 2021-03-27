//one_three
#include<stdio.h> 
void one_three();
void two();

int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	
	return 0;
	
 } 
 
 void one_three()
 {
 	printf("one\n");
 	
 	two();
 	
 	printf("\nthree\n");
 }
 
 void two()
 {
 	printf("two");
 }
