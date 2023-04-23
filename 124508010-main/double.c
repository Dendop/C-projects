#include <stdio.h>
#include <cs50.h>



int main (void)
{
    //Prompt user for lenght, only positive numbers
    int lenght;
    do
    {
           lenght = get_int ("type the lenght: ");
    }
    while (lenght < 1);

//declare array
    int twice[lenght];

//start the array with 1
    twice[0] = 1;
    printf("%i\n", twice[0]);

//
    for (int i = 1; i < lenght; i++)
    {
        //make current element twice the previous
        twice[i] = 2 * twice[i - 1];
        printf("%i\n", twice[i]);
    }
return 0;
}