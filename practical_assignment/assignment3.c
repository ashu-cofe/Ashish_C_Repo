#include <stdio.h>

int main() {
    int x = 5;
    int a, b;

    a = ++x;
    printf("After pre-increment: x = %d, result = %d\n", x, a);

    x = 5;
    b = x++;
    printf("After post-increment: x = %d, result = %d\n", x, b);

    return 0;
}
