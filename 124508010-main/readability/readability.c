#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int count_letters(string text);
int count_words(string text);
int count_sentence(string text);
double calculation(int letters, int words, int sentence);


int main(void)
{
string text = get_string ("Text: ");
int letters = count_letters (text);
int words = count_words(text);
int sentence = count_sentence(text);
double x = calculation(letters, words, sentence);
x = round(x);
//checks
//printf("Letters:%i\n",letters);
//printf("Words:%i\n",words);
//printf("Sentence:%i\n",sentence);
//printf("x = %f\n",x);

if (x < 1)
{
    printf("Before Grade 1\n");
}
else if  (x >= 16)
{
    printf("Grade 16+\n");
}
else
{
    printf("Grade %d\n",(int)x);
}

}
int count_letters(string text)
{
    int letters = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(islower(text[i]))
    {
        letters++;
    }
    else if(isupper(text[i]))
    {
        letters++;
    }

    }
      return letters;
}
int count_words(string text)
{
    int words = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] == 32)
        {
           words++;
        }
    }
    return words + 1;
}
int count_sentence(string text)
{
    int sentence = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] == 46 || text[i] == 33 ||text[i] == 63)
        {
            sentence++;
        }
    }
    return sentence;
}
double calculation(int letters, int words, int sentence)
{
   double L = 0;
   double S = 0;
   double x = 0;

   L = ((double)letters / words) * 100;
   S = ((double)sentence / words) *100;

   x = 0.0588 * L - 0.296 * S - 15.8;
  return (double) x;
}