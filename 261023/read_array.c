#include <stdio.h>
int main(){
    int a[10];
    printf("Please add 10 integer numbers!\n");
    int i,*p;
    for(p = a,i = 0;i < 10;i++){
        scanf("%d",p + i);
    }
    for(;p < (a+10);p ++){
        printf("%d",*p);
        printf(" ");
    }
    return 0;
}