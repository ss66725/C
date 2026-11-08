#include<stdio.h>
#include<math.h>
int is_prime(int x);

int main(){
    int number,answer;
    printf("Please enter the number you want to check!:\n");
    scanf("%d",&number);
    answer = is_prime(number);
    printf("The prime number in 100 is:\n");
    printf("The answer is %s prime\n",answer?("True"):("False"));
    for(int i = 2,n = 0;i <= 100;i++){
        if(is_prime(i)){
            printf("%d\t",i);
            n++;
        if(n % 7 == 0){
            printf("\n");
        }
        }
    }
    return 0;
}

int is_prime(int x){
    if(x <= 1){
        return 0;
        }
    else{
        for(int i = 2;i <= (int)sqrt(x);i++){
            if(x % i ==0){
                return 0;
            }
        }    
    }
    return 1;
}