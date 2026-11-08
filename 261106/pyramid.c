#include<stdio.h>
void pyramid(int x);

int main(){
    int bottom;
    printf("Please enter the number of the bottom:\n");
    scanf("%d",&bottom);
    pyramid(bottom);
    return 0;
}

void pyramid(int x){
    for(int i = 1;i <= x*2 -1;i++){
        
        for(int k = 1;k <= x*2-i;k++){
            printf("0");
        }
        for(int k = 1;k <= 2*i - 1;k++){
            printf("1");                
        }
        for(int k = 1;k <= x*2-i;k++){
            printf("0");                
            }
        printf("\n");
        
    }
}