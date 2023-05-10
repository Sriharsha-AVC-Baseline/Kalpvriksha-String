// This program converts Binary numbers to Decimal numbers
#include<stdio.h>
#include<stdlib.h>
#include<String.h>

// Binary To Decimal Converter
int binary_to_decimal(char *binary,int length)
{
	int decimal=0;
	int two=1,iterator1;
	for(iterator1 = length-1; iterator1 >= 0; iterator1--)
	{
		if(binary[iterator1]=='1')
		{
			decimal = decimal + two;
			two=two*2;
		}
		else if(binary[iterator1]=='0')
		{
			two=two*2;
		}
	}
	return decimal;
}
int main()
{
	printf("Enter the Binary value : ");
	char string[100];
	fgets(string,100,stdin);
	int length = strlen(string);
	printf("%d is the Decimal Value\n",binary_to_decimal(string,length));
}
