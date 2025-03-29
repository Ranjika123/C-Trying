#include <stdio.h>

int num;

int Factorial() {
    printf("Enter the Number -\t");
    scanf("%i",&num);
    int Factorial = 1;
    int Original  =  num;

    while (num >= 1)
    {
        Factorial *= num;
        num--;
    }

    printf("Factorial of %i =  %i",Original,Factorial);
    return Factorial;

}

 

int main () {
    Factorial();
    return 0;
}