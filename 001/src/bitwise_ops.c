#include "bitwise_ops.h"
#include "print_bits.h"
#include<stdio.h>


void bitwise_operations(unsigned char a , unsigned char b)
{
	printf("Bitwise operations on a = %x and b = %x\n",a,b);


	// AND operation
	printf("a &  b = %x \n", a & b);
	print_bits_char(a&b);
	// OR operation
	printf("a |  b = %x \n", a | b);
	// XOR operation
	printf("a ^  b = %x \n", a ^ b);
	// NOT operation
	printf("~a  %x \n",~ a );
	printf("~b  %x \n",~ b );
	// LEFT shift
	printf("a<<1 = %x\n", a << 1);
	printf("b<<1 = %x\n", b << 1);
	// RIGHT shift
	printf("a>>1 = %x\n", a >> 1);
	printf("b>>1 = %x\n", b >> 1);


}

