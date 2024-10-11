#include<stdio.h>
void print_bits_char(unsigned char ch);

int main()
{

	unsigned char a,b;
	a=0x12;
	b=0x34;
	printf("a=%x b=%x\n",a,b);
	printf("a=%x b=%x\n",(unsigned int)a,(unsigned int)b);
	printf("sizeof() of a=%zu\n",sizeof(a));



	/*
	 * bit operations on unsigned char variable
	 *
	 *  a | b
	 *  a & b
	 *  a ^ b
	 *
	 *  also lets swap
	 *
	 */

	printf("a|b = %x\n", a|b);


	b^=a;
	a^=b;
	b^=a;
	printf("a=%x b=%x\n",(unsigned int)a,(unsigned int)b);




	/*
	 * lets try 
	 * to 
	 * print the 
	 * each bits of a  char
	 */


        
	print_bits_char(a);



	 return 0;
}



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


