#include<stdio.h>

int main(){
    float a[100];
    for(int i = 0; i < 100; i++){
        a[i] = i * 1.5f;
    }

    FILE *fp = fopen("bin.dat", "wb");
    fwrite(a, sizeof(float), 100, fp);
    fclose(fp);

    float b[100];
    fp = fopen("bin.dat", "rb");
    fread(b, sizeof(float), 100, fp);
    fclose(fp);

    printf("%f\n", b[84]);
    return 0;
}
