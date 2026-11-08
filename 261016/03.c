#include <stdio.h>
int main(){
    float single_price;
    int number;
    float discount;
    printf("Please write the single price, number and discount:");
    scanf("%f %d %f",&single_price,&number,&discount);
    float whole_price=single_price*number*discount;
    whole_price = (whole_price >= 80)?(whole_price - 10):(whole_price);
    printf("The whole price is %.2f\n",whole_price);
    return 0;
}