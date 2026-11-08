#include<stdio.h>
void tata(int n,char a,char b,char c);
void move(char a,char b);

int main(){
    int num;
    printf("Please input the number of disks:");
    scanf("%d",&num);
    printf("The steps move %d disks is:\n",num);
    tata(num,'A','B','C');
    return 0;
}

void tata(int n,char a,char b,char c){
    if(n == 1){
        move(a,c);
    }
    else{
        tata(n - 1,a,c,b);
        move(a,c);
        tata(n - 1,b,a,c);
    }
}

void move(char x,char y){
    printf("%c-->%c\n",x,y);
}