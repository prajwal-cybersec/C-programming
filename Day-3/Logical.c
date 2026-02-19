#include <stdio.h>

int main() {
    int a = 1, b = 0;

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("Logical AND (a && b) = %d\n", a && b);
    printf("Logical OR (a || b) = %d\n", a || b);
    printf("Logical NOT (!a) = %d\n", !a);
    printf("Logical NOT (!b) = %d\n", !b);

    return 0;
}
