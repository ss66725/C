#include<stdio.h>

int sum(int arr[], int n);

int main(){
    int arr[] = {1,23,452,123,5};
    int n = 5;
    int asw = sum(arr, n);
    printf("The sum of this array is %d", asw);
    return 0;
}

/* 返回数组前 n 个元素的和 */
int sum(int arr[], int n){
    int asw = 0;
    for(int i=0;i<n;i++){
        asw+=arr[i];
    }
    return asw;
}
