// This program convert the CamelCase String Format to snake_case

#include<stdio.h>
#include<String.h>
#include<stdlib.h>

void camel_to_snake(char* string)
{
    int length=strlen(string);
    int iterator1=0,iterator2=0;
    char NewString[200];
    if(string[0]<96)
    {
        string[0]=string[0]+32;
    }
    for(iterator1 = 0; iterator1 < length-1; iterator1++)
    {
        if(string[iterator1]<96)
        {
            NewString[iterator2]='_';
            iterator2++;
            string[iterator1]=string[iterator1]+32;
        }
        NewString[iterator2]=string[iterator1];
        iterator2++;
    }
    printf("%s",NewString);
}

int main()
{
    char string[200];
    printf("Enter the CamelCase String\n");
    fgets(string,100,stdin);
    camel_to_snake(string);
}
