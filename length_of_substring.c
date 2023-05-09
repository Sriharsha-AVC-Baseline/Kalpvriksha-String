// Program to find the minimum length of a substring and 
// Maximum length of a Substring in a string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void smallest(char* string)
{
   int length=strlen(string);
   int array[20];
   int iterator1=0,iterator2=0,new_word=0,length_of_word=0;
   for(iterator1 = 0; iterator1 < length - 1; iterator1++)
   {
    if(string[iterator1]==' ')
    {
        new_word++;
        array[iterator2]=length_of_word;
      //  printf("%d ",arr[j]);
        iterator2++;
        length_of_word=0;
        continue;
    }
    length_of_word++;
    array[iterator2]=length_of_word;
   }
   int minimum=array[0],maximum=array[0];
   for(iterator1 = 0; iterator1 <= new_word; iterator1++)
   {
    if(minimum>array[iterator1])
    {
        minimum=array[iterator1];
    }
    if(maximum<array[iterator1])
    {
        maximum=array[iterator1];
    }
   }
   printf("Minimum value is %d\n",minimum);
   printf("Maximum value is %d\n",maximum);

}

int main()
{
    printf("Enter the String\n");
    char string[200];
    fgets(string,200,stdin);
    //printf("Enter the character for frequency\n");
    smallest(string);
}
