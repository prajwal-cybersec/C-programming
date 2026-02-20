#include <stdio.h>

int main() {
    int a = 5;   // 0101 in binary
    int b = 3;   // 0011 in binary

    printf("a = %d, b = %d\n", a, b);

    // Bitwise AND
    printf("a & b = %d\n", a & b);   

    // Bitwise OR
    printf("a | b = %d\n", a | b);   

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b);  

    // Bitwise NOT
    printf("~a = %d\n", ~a);

    // Left Shift
    printf("a << 1 = %d\n", a << 1);

    // Right Shift
    printf("a >> 1 = %d\n", a >> 1); 

    return 0;
}
