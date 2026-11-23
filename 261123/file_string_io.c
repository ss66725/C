#include<stdio.h>

int main(){
    FILE *fp = fopen("ss.txt", "w");
    fputs("Hello world!", fp);
    fclose(fp);

    fp = fopen("ss.txt", "r");
    char sentence[100];
    fgets(sentence, 100, fp);
    printf("%s", sentence);
    fclose(fp);

    return 0;
}