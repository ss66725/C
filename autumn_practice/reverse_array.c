#include<stdio.h>
void inverse(int x[], int n);
int main(){
    int arr[20]={1,2,3,4,5,6,7,8,9};
    printf("The original array:");
    for(int i=0;i<9;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    inverse(arr,9);
    printf("The inverted array:");
    for(int i=0;i<9;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
void inverse(int x[], int n){
    int temp,i,j,m=(n-1)/2;
    for(i=0;i<=m;i++){
        j=n-1-i;
        temp=x[i],x[i]=x[j],x[j]=temp;
    }
    return;
}