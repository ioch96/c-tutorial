/*
Lesson: 06
Filename: exercise_1.c
Author: Ioannis Christodoulakis
Creation Date: 28.07.2023
*/

#include <stdio.h>

int get_integer(int start, int finish);

int main()
{
	int a,b,n;
	
	/* 1. Diavasma tis eisodou */
	printf("Dwse to a. ");
	a=get_integer(1,10);
	printf("Dwse to b. ");
	b=get_integer(1,10);
	printf("Dwse to n. ");
	n=get_integer(2,5);
	
	/* 2. Ypologismos tou apotelesmatos */
	printf("To apotelesma n*(a-b) einai: %d", n*(a-b));
	
	return 0;
}

int get_integer(int start, int finish)
{
	int x;
	
	do{
		printf("Dwse mia timi apo %d ews %d: ", start, finish);
		scanf("%d",&x);
	} while(x<start || x>finish);
	
	return x;
}
