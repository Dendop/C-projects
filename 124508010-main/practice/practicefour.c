#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int array[10];
    for(int i = 0; i < 10; i++)
    {
        array[i] = get_int("Enter your numbers: ");
    }
 int n = sizeof(array) / sizeof(array[0]);

 for (int i = n - 1; i >= 0; i--)
 {
    printf("%d ",array[i]);
 }

}