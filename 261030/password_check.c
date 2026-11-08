#include<stdio.h>
#include<string.h>

int main (){
    char temp[10];
    char password[] = "123456";
    do{
        printf("Please input the password:");
        scanf("%9s", temp);
        if (strcmp(temp, password) == 0){
            break;
        }
        else{
            printf("Please rewrite again!\n");
        }
    }
    while(1);
        
    printf("Correct!\n");
}