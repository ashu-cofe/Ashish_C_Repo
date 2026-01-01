#include <stdio.h>

int main() {
    float a, b;

    scanf("%f %f", &a, &b);

    printf("Both balances are equal: %d\n", a == b);
    printf("First balance is greater than second: %d\n", a > b);
    printf("Second balance is greater than first: %d\n", b > a);

    return 0;
}
