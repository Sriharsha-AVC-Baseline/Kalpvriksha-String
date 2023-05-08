// This program doesnot print the repeating characters in the String 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char unique(char* string)
{
    int number=0,iterator1=0,iterator2=0,temporary=1;
    for(iterator1=0;iterator1<strlen(string)-1;iterator1++)
    {
       
       for(iterator2=iterator1+1;iterator2<strlen(string)-1;iterator2++)
       {
        if(string[iterator1]==string[iterator2] && string[iterator1]!='0')
        {
        	if(string[iterator2]==' ')
        	{
        		continue;
			}
           string[iterator2]='0';
           temporary++;
        }
       }
       if(string[iterator1]=='0')
       {
       	temporary=1;
       	continue;
	   }
       printf("%c",string[iterator1]);
       temporary=1;
    }
}

int main()
{
    printf("Enter the String\n");
    char string[200];
    fgets(string,200,stdin);
    unique(string);
}
