#include "swap.h"


void swap(unsigned char * a, unsigned char * b){

	*b^=*a;
	*a^=*b;
	*b^=*a;
}
