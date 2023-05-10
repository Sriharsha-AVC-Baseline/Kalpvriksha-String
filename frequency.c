// This Program will find the frequency of the character in the String
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

frequency(char* string,char* frequency)
{
    int number=0,iterator=0;
    for(iterator=0;iterator<strlen(string)-1;iterator++)
    {
       // printf("%c",str[i]);
        if(string[iterator]==frequency)
        {
           /// printf("%c",str[i]);
            number++;
        }
    }
    return number;
}

int main()
{
    printf("Enter the String\n");
    char string[200];
    fgets(string,200,stdin);
    printf("Enter the character for frequency\n");
    char letter;
    scanf("%c",&letter);
    printf("The frequency of word %c is %d\n",letter,frequency(string,letter));
}
