#include <stdio.h>

int Number;


int main () {
    printf("Enter A Number \n");
    scanf("%i", &Number);
    if (Number % 2 == 0)
    {
        printf("Your Entered Number was %i is a Even Number",Number);
    } else {
        printf("Your Entered Number was %i is Odd",Number);
    }

}