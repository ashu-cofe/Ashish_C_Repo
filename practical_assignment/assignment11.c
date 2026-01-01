#include <stdio.h>

void findMax(int *a, int *b, int *max) {
    if (*a > *b)
        *max = *a;
    else
        *max = *b;
}

int main() {
    int num1, num2, maximum;

    scanf("%d %d", &num1, &num2);

    findMax(&num1, &num2, &maximum);

    printf("Maximum = %d\n", maximum);

    return 0;
}
