#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union data{
    int i;
    char c[4];
};

int main(){
    union data d;
    d.i = 332;
    printf("%d\n", d.i);
    strcpy(d.c, "khd"); 
    printf("%s\n", d.c);
    printf("%zu\n", sizeof(union data));
    return 0;
}