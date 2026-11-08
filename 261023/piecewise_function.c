#include<stdio.h>
int main(){
    int x;
    printf("Please input the value of x:");
    scanf("%d",&x);
    if(x>10){
        printf("The answer is %d",3*x-1);
    }
    else if(x>1){
        printf("The answer is %d",x);
    }
    else{
        printf("The answer is %d",2*x-1);
    }
    return 0;
}