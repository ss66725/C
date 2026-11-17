#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i, j, temp, max, n=10, arr[10];
    srand((unsigned int)time(NULL));
    for(i=0;i<n;i++){
        arr[i] = rand()%100+1;
    }
    for(i=0;i<n;i++){
        max = i;
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[max])max = j;
        }
        if(max!=i){
            temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }
    for(i=0;i<n;i++)printf("%d ", arr[i]);
    return 0;
}
