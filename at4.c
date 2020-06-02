#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[10000];
int i, temp;
int j = 0;
bool check = false;

int main(){
    FILE *fp;
    fp = fopen("numbers (1).txt", "r");
    if(fp == NULL) { 
        printf("No file\n");
        system("pause");
        return 0;
    }
    for(i = 0 ; i < 10000 ; i++){
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);
    while(check == false){
        int i = 0;
        for(int j = 0 ; j < 10000 ; j++){
            if(arr[j] > arr[j+1]){
                i++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(i == 0){
            check = true;
        }
    }
    for(int j = 0 ; j < 10000 ; j++){
        printf("%d\t", arr[j]);
    }
    system("pause");
}

