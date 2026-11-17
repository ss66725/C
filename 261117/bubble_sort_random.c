#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i, j, temp, arr[10], n=10;
    srand((unsigned int)time(NULL));
    for(i=0;i<n;i++){
        arr[i] = rand()%100;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
	return 0;
}
