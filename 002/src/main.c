#include<stdio.h>
void displayBits(int num);
int main()
{
	int i;
	for(i=23 ;i<=39; i++)
	{
	 printf("%d--->",i);
	 displayBits(i);
	 printf("      ");
	 displayBits(i-1);

	 printf("\n");
	}





return 0;
}


void displayBits(int num) { 
	
	int i;
for(i=31;i>=0;i--)
{
	printf("%d",(num>>i)&1);
	

	if(i%4==0)
		putchar(' ');




}


	printf("\n");


}
