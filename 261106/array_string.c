#include<stdio.h>
int copy(char from[], char to[]);
int main(){
    char a[] = {"I'm a teacher!"};
    char b[] = {"You're a student!"};
    copy(a, b);
    printf("%s",b);
    return 0;
}

int copy(char from[], char to[]){
    int i = 0;
    while(from[i] != '\0'){
        to[i] = from[i];
        i++; 
    }
    to[i] = '\0';
}
