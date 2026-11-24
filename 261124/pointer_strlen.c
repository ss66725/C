#include<stdio.h>

int main(){
    char c[6] = {"China"};
    char *p = c;
    int count = 0;
    for(int i=0;*(p+i)!='\0';i++,count++);
    printf("It has %d letters", count);
    return 0;
}