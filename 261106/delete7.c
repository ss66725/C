#include<stdio.h>
int main(){
    for(int i = 1,n = 0;i <= 100;i++){
        if(i % 7 == 0 || i % 10 == 7 || i / 10 % 10 == 7){
            continue;
        }
        printf("%d\t",i);
        n++;
        if(n % 7 == 0){
            printf("\n");
        }
    }
}