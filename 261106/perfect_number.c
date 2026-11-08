#include<stdio.h>

int main(){
    for(int i = 2,n = 0;i <= 1000;i++){
        int sum = 0;
        for(int j = 1;j <= i;j++){
            if(i % j == 0){
                sum += j;
            }
        if(sum == i){
            printf("%d\t",i);
            n++;
        }
        if(n % 7 == 0)printf("\n");
    }
    return 0;
}