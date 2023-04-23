#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int g = 30;

    for(int i = 0; i < g; i++)
    {
        for(int j = 0; j < g; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}