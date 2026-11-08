#include <stdio.h>
void average(float *p, int x);
void search(float (*p)[4], int x);
void fail(float (*p)[4], int x);

int main(){
    float score[3][4] = {{5,9,6,7},{5,7,4,8},{2,7,2,1}};
    int i;
    printf("Please input what you want to search:");
    scanf("%d",&i);
    average(*score, 12);
    search(score,i);
    fail(score, 3);
    return 0;
}

void average(float *p, int x){
    float sum = 0;
    for(float *p_end = p+x-1;p <= p_end;p ++){
        sum += *p;
    }
    float average = sum / x;
    printf("The average is %f\n",average);
}

void search(float (*p)[4], int x){
    if(x < 1 || x > 3){
        printf("Invalid number!\n");
        return;
    }
    printf("The score of No.%d is ",x);
    for(int i = 0;i < 4;i ++){
        printf("%f ",*(*(p+x-1) + i));
    }
    printf("\n");
}

void fail(float (*p)[4], int x){
    for(int i = 0,flag = 0;i < x;i++){
        flag = 0;
        for(int j = 0;j < 4;j ++){
            if(p[i][j] <= 4){
                flag = 1;
            }
        }
    if(flag == 1){
        printf("The No%d is failed,the score is ",i+1); 
        for(int j = 0;j < 4;j ++){
            printf("%f ", p[i][j]);    
        }
        printf("\n");
    }
    }
}

