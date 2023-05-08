#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
//key must be single line not even more, must be digit we us if
if (argc != 2)
{
    printf("Usage: ./caesar key\n");
    return 1;
}
for (int i = 0; i < strlen(argv[1]); i++)
{
    if (!isdigit(argv[1][i]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

//convert string key even its number to "int" use *atoi function
int k = atoi(argv[1]);
//get the plaintext from the user
string plaintext = get_string("plaintext:  ");
printf("ciphertext: ");


//encipher the plaintext
for (int j = 0; j < strlen(plaintext); j++)
{
    if(isupper(plaintext[j]))
    {
        printf("%c",(plaintext[j] - 65 + k) % 26 + 65);
    }
    else if(islower(plaintext[j]))
    {
        printf("%c",(plaintext[j] - 97 + k) %26 + 97);
    }
    else
    {
        printf("%c",plaintext[j]);
    }
}
printf("\n");

}
