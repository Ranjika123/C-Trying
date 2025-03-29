#include <stdio.h>
#include <stdlib.h>


int  size ; 
int sum;

int main () {
   
    printf("Enter the Size of the Array :  \n");
    scanf("%i", &size);
    printf("The size of the Array is : %i \n", size);

    int *Array = (int *)malloc( size * sizeof(int));

    if ( Array ==  NULL) {
        printf("Memory Allocation is Failed \n");
        return 1;
    }

    for(int i = 0; i < size; i++)
    {
        printf("Enter the %i Element of the Array : \n", i+1);
        scanf("%d", &Array[i]);
    }

    printf("Array Inclueded :");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", Array[i]);
    }
    printf("\t");
    
    for(int i =0; i< size ; i++){
        sum += Array[i];
    }
    printf("Sum of the Array Is %d.",sum);

    free(Array);


}