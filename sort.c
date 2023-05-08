// This program will sort the Strings in the Lexicographic order
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sort(char* string)
{
    int number=0,iterator1,iterator2;
    char temporary;
    int length=strlen(string);
    for(iterator1 = 1; iterator1 < length; iterator1++)
	{
    for(iterator2 = 0; iterator2 < length-iterator1; iterator2++)
    {
	 if(string[iterator2]>string[iterator2+1])
   	{
	  temporary=string[iterator2];
	  string[iterator2] = string[iterator2+1];
	  string[iterator2+1]=temporary;
	}
}
}
    printf("%s ",string);
}

int main()
{
    printf("Enter the String\n");
    char string[200];
    fgets(string,200,stdin);
    sort(string);
}
