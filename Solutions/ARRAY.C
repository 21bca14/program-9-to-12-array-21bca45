/* Write a Program to input any String and implement strlen() and strcmp() in a single Program */
#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[20];
	clrscr();
	printf("Enter First String:");
	gets(s1);
	printf("\n Enter Second String:");
	gets(s2);
	if(strcmp(s1,s2)==0)
	{
		printf("\n You entered the same string two time:");
	}
	else
	{
		printf("\n You Entered string are not same");
	}
	getch();
}


