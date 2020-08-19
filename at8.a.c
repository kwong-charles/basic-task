#include <stdio.h>
#include <stdlib.h>

int arr[10000];
int mergesort(int l, int h);
int merge(int l, int m, int h);

int merge(int l, int m, int h){
    int a = m - l + 1;
    int b = h - m;
    int L[a];
    int R[b];
    for(int i = 0; i < a; i++){
        L[i] = arr[l + i];
    }
    for(int i = 0; i < b; i++){
        R[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = 0;
    while(i < a && j < b){
        if(L[i] > R[j]){
            arr[l + k] = R[j];
            j++;
            k++;
        }
        else{
            arr[l + k] = L[i];
            i++;
            k++;
        }
    }
    while(i < a){
        arr[l + k] = L[i];
        k++;
        i++;
    }
    while(j < b){
        arr[l + k] = R[j];
        k++;
        j++;
    }
}

int mergesort(int l, int h){
    if(h - l >= 1){
        int m = l + (h - l)/2;
        mergesort(l, m);
        mergesort(m + 1, h);
        merge(l, m, h);
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
    mergesort(0, sizeof(arr)/sizeof(arr[0]) - 1);
    printf("sorted array is \n"); 
    for(int i = 0; i < 10000; i++){
        printf("%d\t", arr[i]);
    } 
    system("pause");
}
