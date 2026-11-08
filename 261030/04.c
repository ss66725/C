#include<stdio.h>
int main (){
    int row,column,i,j;
    printf("Please input the row:");
    scanf("%d",&row);
    printf("Please input the column:");
    scanf("%d",&column);
    for(i = 1;i <= row;i ++){
        for(j = 1;j <= column;j ++){
            printf("[%d,%d]",i,j);
            if(j == column){
                printf("\n");
            }
        }
    }
    return 0;
}