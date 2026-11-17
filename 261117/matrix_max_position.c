#include<stdio.h>

int main(){
    int arr[3][4], i, j;
    int row = 0, column = 0;
    printf("Please enter 12 numbers:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
                row = i;
                column = j;
            }
        }
    }
    printf("The max number is %d, it's located in arr[%d][%d]", max, row, column);
    return 0;
}
