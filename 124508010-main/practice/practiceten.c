#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cs50.h>

int main(void)
{
//write program that generate random number btween 1 and 100

//seed the random number generator with the current time
srand(time(NULL));

//generate a random number between 1 and 100

int random_number = rand() % 99;


int guess;

do {
    guess = get_int("Have a guess you sucka: ");

if(guess > random_number)
{
    printf("Lower!\n");
}
else if(guess < random_number)
{
    printf("Higher!\n");
}
}while (random_number != guess);

return 0;
}