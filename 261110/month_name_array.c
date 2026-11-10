#include<stdio.h>

int main(){
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int n;
    printf("Please enter the month:");
    scanf("%d", &n);
    if(n<1 || n>12){
        printf("Invalid value!");
        return 1;
    }
    printf("\n");
    printf("The month is %s", month[n-1]);
    return 0;
}