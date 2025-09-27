#include<stdio.h>

main(){
	int x , y , sum , difference, product;
	int quotient , remainder;
	printf("enter the first integer value ");
	scanf("%d" , &x);
	printf("enter the second integer value ");
	scanf("%d" , &y);		
	sum = (x+y);
	difference = (x-y);
	product = (x*y);
	quotient = (x/y);
	remainder = (x%y);
	printf("the sum is of values is : %d\n" , sum);
	printf("the difference of values is: %d\n" , difference);
	printf("the product of values is: %d\n" , product);
	printf("the quotient is: %d\n" , quotient);
	printf("the remainder of values is: %d\n" , remainder);
	
	
}	

