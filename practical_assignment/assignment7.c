#include <stdio.h>

int main() {
    float balance;
    float interest = 500.0;
    float charge = 200.0;
    float bonus = 1.10;

    scanf("%f", &balance);

    balance += interest;
    printf("After adding interest: %.2f\n", balance);

    balance -= charge;
    printf("After deducting maintenance charge: %.2f\n", balance);

    balance *= bonus;
    printf("After applying bonus factor: %.2f\n", balance);

    balance /= 2;
    printf("After dividing between two accounts: %.2f\n", balance);

    return 0;
}
