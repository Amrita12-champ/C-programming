//wap to demonstrate use of bitwis operetor.
#include <stdio.h>

int main() {
    int a = 60; 
    int b = 13; 
    int result;
    result = a & b;
    printf("Bitwise AND (a & b): %d\n", result);
    result = a | b;
    printf("Bitwise OR (a | b): %d\n", result);
    result = a ^ b;
    printf("Bitwise XOR (a ^ b): %d\n", result);
    result = ~a;
    printf("Bitwise NOT (~a): %d\n", result);
    result = a << 2;
    printf("Left Shift (a << 2): %d\n", result);
    result = a >> 2;
    printf("Right Shift (a >> 2): %d\n", result);

    return 0;
}