#include<stdio.h>
#include<math.h>
int is_prime(int x);

int main(){
    int number,answer;
    while(1){
        printf("Please input the number you want to check!:\n");
        scanf("&d",&number);
        answer = is_prime(number);
        printf("The answer is %s prime\n",answer?("True"):("False"));
    }
    return 0;
}

int is_prime(int x){
    int asw;
    if(x <= 1){
        asw = 0;
        }
    else{
        for(int i = 0;i <= sqrt(i);i++){
            if(x % i ==0){
                asw =1;
                break;
            }
        }
    }
    return asw;
}