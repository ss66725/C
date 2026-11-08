#include<stdio.h>
#include<math.h>
int is_prime(int x);
void print_prime(int start, int end);

int main(){
    print_prime(200, 300);
    return 0;
}

int is_prime(int x){
    if(x < 2){
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

void print_prime(int start, int end){
    int n = 0;
    for(int i = start; i <= end; i++){
        if(is_prime(i)){
            printf("%d\t",i);
            n++;
            if(n % 4 == 0){                
                printf("\n");                
            }           
        }        
    }
}