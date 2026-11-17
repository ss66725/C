#include<stdio.h>
#include<stdbool.h>

int main (){
    char arr[128];
    int num=0;
    bool is_word = 0;
    printf("Please enter a sentence:\n");
    fgets(arr, sizeof(arr), stdin);
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==' '){
            is_word = 0;
        }
        else{
            if(is_word==0){
                is_word = 1;
                num++;
            }
        }
    }
    printf("There are %d words in this sentence.", num);
    return 0;
}
