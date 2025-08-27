/*
WAPC to input a 4-digit number and find the sum and product of the rightmost
and leftmost digits.
*/
#include<stdio.h>

int main()
{
	int num, leftmostnum, rightmostnum, sum, product;
	printf("\nEnter a 4-digit number: ");
	scanf("%d", &num);
	leftmostnum=num/1000;
	rightmostnum=num%10;
	sum=leftmostnum+rightmostnum;
	product=leftmostnum*rightmostnum;
	printf("\nThe sum and product of the rightmost and leftmost digits: %d %d", sum, product);
	return 0;
}
