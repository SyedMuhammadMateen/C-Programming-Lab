#include <stdio.h>
#include <math.h>

int main() {
    int b;
    float Answer;

    printf("Enter your number: ");
    scanf("%d", &b);

    Answer = sqrt(b);
    printf("Result: %.2f", Answer);

    return 0;
}

