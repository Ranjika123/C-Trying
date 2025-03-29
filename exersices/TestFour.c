#include <stdio.h>

int Array[5] = {1,2,3,4,5};
int size = 5;
int NewArray [5] ;

int main () {

    printf("Original Array is -\t");
    for (int i =0 ; i < size ; i++){
        printf("%i \t",Array[i]);
    }
    printf("\n");
    printf("Reveresed Array is - \t");

    for (int j = 0 ; j < size; j++){
        NewArray[size - j - 1 ] = Array[j];
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%i \t",NewArray[i]);
    }
    return 0;
}