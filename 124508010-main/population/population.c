#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int start;
   int end;
   do
   {
    start = get_int ("Enter start population: ");
   }
   while (start < 9);

    do
     {
        end = get_int ("Enter end population: ");
    }
    while (end < start);

   int years = 0;

   while( start < end)
   {
    start = start + (start/3) - (start/4);
    years++;
   }
    printf("Years: %i", years);
    printf("\n");


}
