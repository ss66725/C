#include<stdio.h>
int age(int n);
int main(){
    int ages, number;
    printf("I want to know:");
    scanf("%d",&number);
    ages = age(number);
    if(ages != 404){
        printf("The age of the %d student is %d",number,ages);
    }
    return 0;    
}

int age(int n){
    if(n == 1){
        return 10;
    }
    else if(n < 1 || n > 5){
        printf("Invalid value!");
        return 404;
    }
    else{
        return age(n-1) + 2;
    }
}