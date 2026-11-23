#include<stdio.h>

int main(){
    FILE *fp = fopen("dd.txt", "w");
    fputc('x', fp);
    fclose(fp);
    return 0;
}