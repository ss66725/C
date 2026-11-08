#include<stdio.h>
#include<math.h>
int is_prime(int x);

int main(){
    int num;
    printf("Please enter a number bigger than three that you want to exam:\n");
    scanf("%d",&num);
    if(is_prime(num)){
        printf("Yeah,it's a prime number!");
    }
    else{
        printf("no,it's not a prime number!");
    }
    return 0;
}

int is_prime(int x){
    if(x <= 3){
        return 0;
    }
    else{
        for(int i = 2; i <= sqrt(x); i++){
            if(x % i == 0){
                return 0;
            }
        }
        return 1;
    }
}