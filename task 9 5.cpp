#include<stdio.h>

main(){
	int x, y;
	printf("enter first integer value of x : ");
	scanf("%i" , &x);
	printf("enter second integer of y: ");
	scanf("%i" , &y);
	printf("x&y (AND operation): %d\n" ,x&y );
	printf("x | y (OR operation): %d\n" , x|y);
	printf("x^y (XOR operation): %d \n" , x^y);
	printf("~x (not operator): %d\n" , ~x);
	printf("x <<1 (left shift): %d\n" , x<<1);
	printf("x >>1 (right shift): %d\n" , x>>1);

    return 0;
}

