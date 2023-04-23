#include <stdio.h>
#include <cs50.h>
#include <string.h>
//count total number of words from user's input and also number of characters
int calculation(string input);

int main (void)
{
//Prompt user to enter sentence
string input = get_string("Enter your sentence: ");

int words = calculation(input);
int characters = strlen(input) - words + 1;

//print the words and characters
printf("Total number of words:%d\n ",words);
printf("Total number of characters:%d\n",characters);



}
int calculation(string input)
{
    int words = 0;


    for(int i = 0; i < strlen(input); i++)
    {
      if(input[i] == 32 )
      {
        words++;
      }
    }
    return words + 1;
}