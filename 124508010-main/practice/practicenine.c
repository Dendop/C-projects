#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string input = get_string("Type anything: ");

    int n = strlen(input);

   for(int i = n - 1; i >= 0; i--)
   {
    printf("%c",input[i]);
   }
   //newline
   printf("\n");
   return 0;
}