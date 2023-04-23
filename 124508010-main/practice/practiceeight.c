#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    float sum;
    float difference;
    float product;
    float quotient;
    //prompt user for numbers
int number_one = get_int("Provide first number: ");
int number_two = get_int("Provide second number: ");

//calculations
sum = number_one + number_two;
difference = number_one - number_two;
product = number_one * number_two;
quotient = number_one / number_two;



//printout
printf("Number sum: %f \n",sum);
printf("Number difference: %f \n",difference);
printf("Number product: %f \n",product);
printf("Number quotient: %f \n",quotient);



return 0;
}