
void print_bits_char(unsigned char ch)
{
     int i;

    printf("the bits of %x ",ch);
     for(i=7;i>=0;i--)
     {
      printf("%d", (ch>>i)&1 );
      if(i%4==0)
              putchar(' ');

     }
     printf("\n");

}

