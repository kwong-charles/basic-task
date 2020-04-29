#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("C:\\C_Projects\\numbers.txt", "r");
    int max, min, no, len;
    float sum;
    sum = 0;
    max = 0;
    len = 0;
    min = 10000;
    int arr[2][10000];
    for(int i = 0 ; i <10000 ; i++){
        fscanf(fp, "%d", &no);
        sum += no;
        if(no > max){
            max = no;
        }
        if(no < min){
            min = no;
        }
    }
    fclose(fp);
    printf("mean =\t%0.2f\n", sum/10000);
    printf("max =\t%d\n", max);
    printf("min =\t%d", min);
    system("pause");
}