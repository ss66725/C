#include<stdio.h>

int main(){
    FILE *fp = fopen("dd.txt", "r");
    if(fp == NULL){
        printf("Invalid value!");
        return 1;
    }

    int asw = fgetc(fp);
    printf("%c", asw);
    fclose(fp);
    return 0;
}
