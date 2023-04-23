#include <cs50.h>
#include <stdio.h>

int main(void)
{

int h, row, line, spc;
  do {
    h = get_int ("Height: ");
  }
  while (h < 1 || h > 8);

  for(row = 0; row < h; row++)
   {

    for(spc = 0; spc < h - row - 1; spc++)
    {
      printf(" ");
    }

    for(line = 0; line <= row; line++)
    {
      printf("#");
    }



    printf("\n");
   }

}