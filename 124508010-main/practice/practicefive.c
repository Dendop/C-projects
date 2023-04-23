#include <stdio.h>
#include <cs50.h>

const int K = 10;

int main (void)
{
 int array[K];
 int total = 0;
 float avg = 0;
 for(int i = 0; i < K; i++)
 {
    array[i] = get_int("Enter your value %i: ", i + 1);
 }
  for(int i = 0; i < K; i++)
  {

    total += array[i];

  }

  for (int i = 0; i < K; i++)
  {

    avg += array[i] /(float) K;

  }
  printf("Your total value is:%i\n ", total);
  printf("Your average is:%.2f\n ", avg);
return 0;
}