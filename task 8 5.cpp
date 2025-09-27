#include<stdio.h>

main(){
	
	int a , b;
	printf("enter the  first integer value of a: ");
	scanf("%i" , &a);
	printf("enter the  second integer value of b: ");
	scanf("%i" , &b);
	printf("(a=b) : %d\n" ,a==b );
	printf("(a>b) : %d\n" , a>b);
	printf("(a<b) : %d\n" , a<b);
	printf("(a!=b) : %d\n" , a!=b);
	printf("(a>=b) : %d\n" , a>=b);
	printf("(a<=b) : %d\n" , a<=b);
}

