// This program will compare two strings and prints whether the strings are equal or not equal without using strcmp 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

compare(char *string1,char *string2)
{
	if(strlen(string1) != strlen(string2))
	{
		return 0;
	}
	else
	{
		int iterator=0,length=strlen(string1);
		for(iterator = 0; iterator<length-1 ;iterator++)
		{
			if(string1[iterator]!=string2[iterator])
			{
				return 0;
			}
		}
		return 1;
	}
}

int main()
{
	puts("Enter the String 1");
	char string1[200];
	fgets(string1,200,stdin);
	puts("Enter the String 2");
	char string2[200];
	fgets(string2,200,stdin);
	int result=compare(string1,string2);
	if(result==1)
	{
		puts("Equal Strings");
	}
	else
	{
		puts("Unequal Strings");
	}
}
