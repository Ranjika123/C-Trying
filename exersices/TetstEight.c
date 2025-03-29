#include<stdio.h>

int Swap (int a, int b) {

    int * PointerA = &a;
    int * PointerB = &b;
    int Temp;

    printf("Befor Values : A = %d, B = %d \n",a,b);
    Temp = * PointerA;
    * PointerA = * PointerB;
    *PointerB = Temp;

    printf("After: A=%d, B=%d\n", a, b);

    return 0 ;

}

int main () {
    Swap (4,13) ;
    return 0;
}