// This program will convert lower case letters to Upper case and Vice verse
#include<stdio.h>
#include<String.h>
#include<stdlib.h>

void viceverse(char* string)
{
    int length=strlen(string);
    int iterator1=0,iterator2=0;
    for(iterator1 = 0; iterator1 < length-1; iterator1++)
    {
       if(string[iterator1] > 64 && string[iterator1] < 96)
       {
        string[iterator1] = string[iterator1] + 32;
       }
       else if(string[iterator1] >= 96)
       {
        string[iterator1] = string[iterator1]-32;
       }
    }
    printf("%s",string);
}

int main()
{
    char string[200];
    printf("Enter the String\n");
    fgets(string,100,stdin);
    viceverse(string);
}
