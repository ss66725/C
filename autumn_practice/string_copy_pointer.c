#include<stdio.h>
int main(){
    char a[] = "I am a student!";
    char b[20];
    int i = 0;
    // for(i = 0;a[i] != '\0';i ++){
    //     *(b+i) = *(a+i);
    // }
    // *(b+i) = '\0';
    while((b[i] = a[i]) != '\0'){
        i ++;
    }
    printf("The string is %s\n",a);
    printf("The string is ");
    for(i = 0;b[i] != '\0';i ++){
        printf("%c",b[i]);
    }
    return 0;
}