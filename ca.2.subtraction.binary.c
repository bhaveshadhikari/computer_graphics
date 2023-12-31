#include <stdio.h>

#include <math.h>

void main() {

    
    int numa[8] = {0}, numb[8] = {0}, diff[8] = {0};

    printf("\tSUBTRACTION USING TWO'S COMPLEMENT\n");
    printf("Enter two 8-bit binary numbers\n");

    printf("Enter first number: ");
    for (int i = 0; i < 8; i++) {
        scanf("%1d", &numa[i]); 
    }

    printf("Enter second number: ");
    for (int i = 0; i < 8; i++) {
        scanf("%1d", &numb[i]); 
    }

    
    for (int i = 7; i >= 0; i--) {
        diff[i] = numa[i] - numb[i];
        
        if (diff[i] < 0) {
            numa[i - 1] = numa[i - 1] - 1;
        }

        diff[i] = fabs(diff[i] % 2);
    }

    printf("\nDifference is: ");
    for (int i = 0; i < 8; i++) {
        printf("%d", diff[i]);
    }

}
