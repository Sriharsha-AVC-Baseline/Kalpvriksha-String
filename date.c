// Take date as input 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void get_date(char *string)
{
	int day,iterator1,number=0,temporary;
	int iterator2 = 0;
	int date[3];
	char month[20][12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int length=strlen(string)-1;
	for(iterator1 = 0; iterator1 < length; iterator1++)
	{
		if(string[iterator1] >= 48 && string[iterator1] <= 57)
		{
			while(string [iterator1] >= 48 && string [iterator1] <= 57)
			{
				temporary=string[iterator1]-48;
				number=number*10+temporary;
				iterator1++;
			}
		}
		if(string[iterator1]==' '||string[iterator1]=='/'||string[iterator1]=='-')
		{
			date[iterator2]=number;
			iterator2++;
			number=0;
			continue;
		}
		
	} 
	date[iterator2]=number;
	if(date[0]>31 || date[1]>12 ||(date[1]==2&&date[0]>29) )
	{
		printf("Error");
		exit(0);
	}
	printf("%d - %s - %d",date[0],month[date[1]-1],date[2]);
}

int main()
{
	int data;
	char string[200];
	fgets(string,200,stdin);
	get_date(string);	
}
