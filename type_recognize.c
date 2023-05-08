// This program will scan entire line and extract the integer , float and String data types presetnt in the line...
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void recognize(char *string)
{
	int length=strlen(string);
	int type_int=0,iterator,temp;
	float type_float;
	char type_char;
	char type_string[200];
	for(iterator=0;iterator<length-1;iterator++)
	{
		if(string[iterator]>=48 && string[iterator]<=57)
		{
			
			while(string[iterator]>=48 && string[iterator]<=57)
			{
				temp=int(string[iterator]-48);
				type_int=type_int*10 + temp;
				iterator++;
			}
			if(string[iterator]=='.')
			{
				printf("\t%d.",type_int);
			iterator++;
				while(string[iterator]>=48 && string[iterator]<=57 &&iterator<length-1)
				{
					printf("%c",string[iterator]);
					iterator++;
				}
				printf(" is an Float Data\n");
			}
			else
			{
			printf("\t%d is an Integer Data\n",type_int);
	     	}
	}	
		
		else if(string[iterator]==','||string[iterator]==' ')
		{
			continue;
		}
		else
		{
			if(string[iterator+1]!=','||string[iterator+1]!=' '||string[iterator]!=NULL && iterator<length-1)
			{
				printf("\tString value is : ");
				while(string[iterator]!=','&&string[iterator]!=' '&&iterator<length-1)
				{
					if(string[iterator]==' '||string[iterator]==',')
					{
						continue;
					}
					printf("%c",string[iterator]);
					iterator++;
				}
				printf("\n");
			}
		}
	type_int=0;
	}
}

int main()
{
	char line[200];
	fgets(line,200,stdin);
	int length = strlen(line);
	line[length]=' '; 
	recognize(line);
}
