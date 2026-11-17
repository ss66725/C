#include<stdio.h>

int main(){
    int a[3];
    int n=3, i, j, temp;
    printf("Please input three height:\n");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j] < a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}
