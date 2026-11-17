#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    int i;
    printf("Please enter the number of the array:\n");
    scanf("%d", &num);
    int a[num];
    int max = 0;

    for(i = 0;i < num;i ++)a[i] = i+10;
    for(i = 0;i < num;i ++){
        printf("a[%d] = %d\n", i, a[i]);
        if(a[i] > max)max = a[i];
    }
    printf("The max number is %d", max);

    return 0;
}
