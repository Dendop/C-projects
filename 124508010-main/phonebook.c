#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    int age = get_int("Enter your age: ");
    long phone_number = get_long("Please enter your phone number: ");

    printf("hello, %s\n", name);
    printf("your age, %i\n", age);
    printf("Your phone number: %li\n", phone_number); // for phone number I could also use string aka country code

}
