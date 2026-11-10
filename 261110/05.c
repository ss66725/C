#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Please enter a number:");
    scanf("%d",&n);
    if(n <= 0){
        printf("n must be positive");
        return 1;
    }
    int *a = malloc(n * sizeof(int));
    printf("Please enter the numbers in a!\n");
    for(int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }    
    if(a == NULL){
        printf("alloc error!");
        return 1;
    }
    int sum = 0,max = a[0];
    for(int i = 0;i < n;i++){
        sum += a[i];
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("The average number is %d\n", sum / n);
    printf("The max number is %d\n", max);
    free(a);
    a = NULL;
    return 0;
}