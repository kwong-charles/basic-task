#include <stdio.h>
#include <stdlib.h>

int arr[10000];
int i, temp;

int main(){
    FILE *fp;
    fp = fopen("numbers (1).txt", "r");
    for(int j = 0 ; j < 10000 ; j++){
        fscanf(fp, "%d", &arr[j]);
    }
    fclose(fp);
    for(int j = 1 ; j < 10000 ; j++){
        i = j - 1;
        int k = j;
        while(arr[k] < arr[i] && i >= 0){
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            i--;
            k--;
        }
    }
    for(int j = 0 ; j < 10000 ; j++){
        printf("%d\t", arr[j]);
    }
    system("pause");
}
