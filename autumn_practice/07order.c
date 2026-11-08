#include <stdio.h>
int main(){
    void exchange(int *q1,int *q2,int *q3);
    int a,b,c,*p1,*p2,*p3;
    printf("Please write three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    p1 = &a,p2 = &b,p3 = &c;
    exchange(p1,p2,p3);
    printf("The order is %d %d %d\n",a,b,c);
    return 0;
}

void exchange(int *q1,int *q2,int *q3){
    void swap(int *qp1,int *qp2);
    if(*q1 < *q2){
        swap(q1,q2);
    }
    if(*q2 < *q3){
        swap(q2,q3);
    }
    if(*q1 < *q2){
        swap(q1,q2);
    }
}

void swap(int *qp1,int *qp2){
    int temp;
    temp = *qp1;
    *qp1 = *qp2;
    *qp2 = temp;
}