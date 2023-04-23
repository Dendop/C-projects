#include <stdio.h>
#include <cs50.h>

int check_triangle(int a, int b, int c);

int main (void)
{

    int a = get_int("a side: ");
    int b = get_int("b side: ");
    int c = get_int("c side: ");

   int p = check_triangle(a, b, c);


    if (p == 1)
    {
       printf("Your triangle is valid ");
    }
    else if (p == 0)
    {
        printf("Not valid sides, please try again");
    }
}
int check_triangle(int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0)
    {

        return 0;
    }
    if((a + b <= c || b + c <= a || a + c <= b))
    {

        return 0;
    }

      return 1;

}