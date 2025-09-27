#include <stdio.h>

int main() {
    int num1, num2;
    float result;

    printf("Enter the first number: ");
    scanf("%i", &num1);

    printf("Enter the second number: ");
    scanf("%i", &num2);

    result = num1 + num2 * (num1 - num2) / 2;

    printf("Answer: %f\n", result);
    printf("Step 1: Remove the brackets from  num1 + num2 * (num1 - num2) / 2\n");
    printf("Step 2: Subtract num2 from num1\n");
    printf("Step 3: the result  has been divided by 2\n");
    printf("Step 4:the result  has been multiplied with num2\n");
    printf("Step 5: Add num1 to the result\n");

    return 0;
}
