#include <stdio.h>
#include <cs50.h>
#include <string.h>
const int N = 3;
float average ( int array[]);

int main(void)
{
    int array[N];
    for (int i = 0; i < N; i++)
    {
        array[i] = get_int ("Enter the number %i: ", i + 1);
    }
  float avg = average(array);

  printf("Your average is: %f\n", avg);
}
float average ( int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
     {
    sum += array[i];
     }
   return sum / (float) N;
}