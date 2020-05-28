#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A;

int bs(int arr[], int h, int c);

int bs(int arr[], int h, int c){
    int mid = ceil(h/2);
    int l = 0;
    while(arr[mid] != c){
        if(arr[mid] < c){
            l = mid;
        }
        else{
            h = mid;
        }
        mid = ceil((l+h)/2);
    }
    return mid;
}

int main() {
   int arr[] = {0,1,8,12,12,18,18,45,55,99};
   int n=45;
   printf("%d is found at Index %d \n",n, bs(arr,10,n));
   system("pause");
   return 0;
}