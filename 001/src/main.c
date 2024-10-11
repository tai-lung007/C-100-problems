#include "print_bits.h"
#include "bitwise_ops.h"
#include "swap.h"

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

	bitwise_operations(a,b);

	/*
	 * swap a and b
	 *
	 */
	swap(&a,&b);
	printf("after swapping :\n");
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




