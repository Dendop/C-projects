#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    int age = get_int("Enter your age: ");

   int after = age + 10;

   printf("Hi, %s . In 10 years you will be %i years old.\n", name, after);
   return 0;
}