#include<stdio.h>

int main(){
    FILE *fp = fopen("score.txt", "w");
    fprintf(fp, "%d %f", 100, 92.5);
    fclose(fp);

    fp = fopen("score.txt", "r");
    int score1;
    float score2;
    fscanf(fp, "%d %f", &score1, &score2);
    printf("The score is %d and %.3f", score1, score2);
    fclose(fp);

    return 0;
}