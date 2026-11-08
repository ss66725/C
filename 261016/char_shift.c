#include<stdio.h>
int main(){
    char a[6]="China";
    for(int i=0;i<5;i++){
        char b=a[i] + 4;
        printf("%c",b);
    }
}

