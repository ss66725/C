#include<stdio.h>
void add(float x, float y);
int main(){
    printf("Please input two float in 100:");
    float a, b;
    scanf("%f, %f",&a, &b);
    add(a, b);
    return 0;
}

void add(float x, float y){
    float result = x + y;
    printf("The result is %f",result);
}