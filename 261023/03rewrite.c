#include<stdio.h>
int main(){
    int num;

    printf("Please input an integer with no more than three digits:");
    scanf("%d",&num);

    int hundreds_place = num/100;
    int tens_place = num/10%10;
    int ones_place = num%10;
    int reversed_number;
    int original_number = ones_place + tens_place*10 + hundreds_place*100;
    

    if(num >= 100){
        printf("It's hundreds digits\n");
        reversed_number = ones_place*100 + tens_place*10 + hundreds_place;
    }
    else if(num >= 10){
        printf("It's tens digits\n");
        reversed_number = ones_place*10 + tens_place*1;
    }
    else{
        printf("It's ones digits\n");
        reversed_number = ones_place;
    }

    printf("The original number is %d\n",original_number);
    printf("The reversed number is %d\n",reversed_number);
    return 0;    
}