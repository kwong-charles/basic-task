#include <stdio.h>
#include <stdlib.h>

int main() {
    float num[5];
    int length_of_array = 0;
    float sum, average, max, min;

    /* Print basic information about the array */
    printf("---------------------------------------\n");
    printf("Size of array num[]:\t%2d bytes\n", sizeof(num));
    printf("Size of each element:\t%2d bytes\n", sizeof(num[0]));

    length_of_array = sizeof(num)/sizeof(num[0]);
    printf("The array num[] has %d elements\n",length_of_array);
    printf("---------------------------------------\n\n");


    /* Print basic information about the array */
    printf("Getting numbers into the array...\n\n");

    int i;
    for (i=0; i<length_of_array; i++) {
        printf("num[%d] = ", i);
        scanf("%f", &num[i]);
    }

    printf("\nContent stored in the array...\n");
    printf("---------------------------------------\n");

    printf("num[0]\tnum[1]\tnum[2]\tnum[3]\tnum[4]\n");
    for(i = 0 ; i < length_of_array ; i++){
        printf("%0.2f\t", num[i]);
    }

    printf("\n---------------------------------------\n");
    
    max = num[0];
    for(i = 1 ; i < length_of_array ; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    min = num[0];
    for(i = 1 ; i < length_of_array ; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    sum = 0;
    for(i = 0 ; i < length_of_array ; i++){
        sum += num[i];
    }
    average = sum/length_of_array;
    printf("Max\t= %0.2f\n", max);
    printf("Min\t= %0.2f\n", min);
    printf("Sum\t= %0.2f\n", sum);
    printf("Average\t= %0.2f", average);
    system("pause");
    return 0;
}