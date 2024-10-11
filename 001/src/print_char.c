
#include "print_bits.h"
void print_bits_char(unsigned char ch)
{
     int i;

    printf("\nthe bits of %x\n ",ch);
     for(i=7;i>=0;i--)
     {
      printf("%d", (ch>>i)&1 );
      if(i%4==0)
              putchar(' ');

     }
     printf("\n");

}

