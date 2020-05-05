#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("C:\\C_Projects\\numbers.txt", "r+");
    int max, min, no, len, count, p;
    float sum;
    sum = 0;
    max = 0;
    len = 0;
    count = 0;
    p = 1;
    min = 10000;
    int arr[2][10000];
    for(int i = 0 ; i <10000 ; i++){
        p = 1;
        fscanf(fp, "%d", &no);
        if(no == EOF){
            break;
        }
        sum += no;
        if(no > max){
            max = no;
        }
        if(no < min){
            min = no;
        }
        count++;
        for(int a = 0 ; a < len ; a++){
            if(no == arr[0][a]){
                arr[1][a]++;
                p = 0;
                break;
            }
        }
        if(p == 1){
            arr[0][len] = no;
            arr[1][len] = 1;
            len++;
        }
    }
    fclose(fp);
    FILE *ft;
    ft = fopen("C:\\C_Projects\\frequency.txt", "w+");
    for(int a = 0 ; a < len ; a++){
        fprintf(ft, "number: %d\tfrequency: %d\n", arr[0][a], arr[1][a]);
    }
    fclose(ft);
    printf("mean =\t%0.2f\n", sum/count);
    printf("max =\t%d\n", max);
    printf("min =\t%d", min);
    system("pause");
}