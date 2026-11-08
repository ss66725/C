#include<stdio.h>

int main(){
    char x,command;
    while(1){
        printf("Please input a letter to transfer:\n");
        scanf(" %c", &x);
        if(x >= 'A' && x <= 'Z'){
            x += 32;
        }
        else if(x >= 'a' && x <= 'z'){
            x -= 32;
        }
        else{
            printf("Invalid value!\n");
            continue;
        }
        printf("The answer is %c\n", x);
        printf("Press x to exit:");
        scanf(" %c", &command);
        if(command == 'x' || command == 'X'){
            break;
        }
    }
    return 0;
}