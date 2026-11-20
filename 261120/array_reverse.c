#include<stdio.h>

void reverse(int arr[], int n);

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    reverse(arr, n);

    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}

/* 原地翻转数组：首尾对调，走到中间就停 */
void reverse(int a[], int n){
    for(int i=0;i<n/2;i++){
        int temp;
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}
