#include <stdio.h>

int A = 10;
int B = 15;
int * PointerA = &A;
int * PointerB = &B;
int Temp;



int main () {
    printf("Before: A=%d, B=%d\n", A, B);
    Temp = *PointerA;       // Temp = 10
    *PointerA = *PointerB;  // A = 15
    *PointerB = Temp;       // B = 10
    printf("After: A=%d, B=%d\n", A, B);

    return 0;
}
