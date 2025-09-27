#include <stdio.h>

int main() {
    int m, n;

    printf("Enter value of m:\n"); 
    scanf("%i", &m);

    printf("Enter value of n:\n"); 
    scanf("%i", &n);

    (m > n) ? printf("%i is greater than %i\n", m, n) 
                     printf("%i is greater than %i\n", n, m);

    return 0;
}

