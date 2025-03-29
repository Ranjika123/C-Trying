#include <stdio.h>

char Name[100];
int i;
int count;

int main () {
    printf("Enter Your First Name -\t");
    scanf("%s", Name);

    for ( i = 0; Name[i] != '\0'; i++)
    {
        count++;
        
    }

    printf("\n Total Charactors of %s are %i",Name,count);
    
}

