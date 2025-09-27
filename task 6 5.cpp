#include <stdio.h>

int main() {
	
	int x, y, z, result;
	printf("please enter three integer values:\n");
	printf("enter the value for x: ");
	scanf("%d", &x);
	printf("enter value for y: ");
	scanf("%d", &y);
	printf("enter value for z: ");
	scanf("%d", &z);
	
	result = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
	
	printf("the maximum value etween the three is: %d", result);
	
	return 0;
}


