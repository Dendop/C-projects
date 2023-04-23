#include <stdio.h>
#include <cs50.h>



int main (void)
{
    int array[5];
    int max, min;
    for (int i = 0; i < 5; i++)
    {
        array[i] = get_int ("Provide the number %i: ", i + 1);
    }

    max = min = array[0];

    for(int i = 1; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("Maximum value is : %d\n",max);
    printf("Minimun value is: %d\n", min);

    return 0;

}