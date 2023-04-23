#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int sum_evenonly(int input[]);

int main (void)
{
    //Prompt user for 10 intregers store them in array
  int input [10];


  for(int i = 0; i < 10; i++)
  {
    input[i] = get_int("Provide the number %i: ",i + 1);
  }
    int sum = sum_evenonly(input);

    printf("The sum if even numbers is: %i\n",sum);
}
int sum_evenonly (int input[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (input[i] % 2 == 0)
        {
            sum += input[i];

        }

    }
    return sum;

}