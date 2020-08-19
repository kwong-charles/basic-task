#include <stdio.h>
#include <stdlib.h>

int arr[10000];

void quicksort(int l, int h);

void quicksort(int l, int h){
    int temp, j;
    temp = arr[(l+h)/2];
    arr[(l+h)/2] = arr[h];
    arr[h] = temp;
    if(h > l){
        int i = l - 1;
        for(j = l; j < h; j++){
            if(arr[j] < arr[h]){
                i++;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        temp = arr[h];
        arr[h] = arr[i+1];
        arr[i+1] = temp;
        quicksort(l, i);
        quicksort(i + 2, h);
    }
}

int main(){
    FILE *fp;
    fp = fopen("numbers (1).txt", "r");
    if(fp == NULL) { 
        printf("No file\n");
        system("pause");
        return 0;
    }
    for(int i = 0 ; i < 10000 ; i++){
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);
    int length = sizeof(arr)/sizeof(arr[0]) - 1;
    quicksort(0, length);
    for(int i = 0; i <= length; i++){
        printf("%d\t", arr[i]);
    }
    system("pause");
}