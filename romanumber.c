// C program to convert Roman Numerals to Decimal numbers 



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int values(char value)
{
    char RomanValues[] = {'l','V','X','L','C','D','M'};
    int NumericalValues[]={1,5,10,50,100,500,1000};
    int iterator=0;
    for(iterator = 0 ; iterator < 7 ; iterator++)
    {
        if(value == RomanValues[iterator])
        {
            return NumericalValues[iterator];
        }
    }
}

int roman_to_number(char* roman_number)
{
   int iterator=0,length=strlen(roman_number);
   int number=values(roman_number[0]);
   int singles=0;
   int recent=values(roman_number[0]);
   for(iterator = 1;iterator < length-1; iterator++)
   {
        int previous=values(roman_number[iterator-1]);
            if(previous < values(roman_number[iterator]))
            {
                number = number - previous + (values(roman_number[iterator]) - previous);
            }
            else
            {
                number = values(roman_number[iterator]) + number;
            }
        
      recent=values(roman_number[iterator]);
   }
   return number;
}
int main()
{
    char string[100];
    fgets(string,100,stdin);
    
    
    printf("Numerical value is %d\n",roman_to_number(string));
    
}
