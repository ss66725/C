#include<stdio.h>
#include<stdlib.h>

/* 生成 bin.dat：100 个 float，a[i] = i * 1.5f */
static void make_data(void){
    float a[100];
    for(int i = 0; i < 100; i++){
        a[i] = i * 1.5f;
    }
    FILE *fp = fopen("bin.dat", "wb");
    if(fp == NULL){
        printf("cannot create bin.dat\n");
        exit(1);
    }
    fwrite(a, sizeof(float), 100, fp);
    fclose(fp);
}

int main(){
    make_data();

    FILE *fp = fopen("bin.dat", "rb");
    if(fp == NULL){
        printf("bin.dat not found!\n");
        return 1;
    }

    /* 随机读：只取第 84 号元素 */
    fseek(fp, 84 * sizeof(float), SEEK_SET);
    float a;
    fread(&a, sizeof(float), 1, fp);
    printf("%f\n", a);

    /* 查文件大小：挪到末尾，问坐标 */
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    printf("size == %ld\n", size);
    rewind(fp);

    /* 顺序读：倒回开头读第一个 */
    float b;
    if(fread(&b, sizeof(float), 1, fp) != 1){
        printf("Read failed!\n");
    }
    else{
        printf("%f\n", b);
    }

    /* 检测：在末尾读一个字节，看是哪盏灯亮 */
    fseek(fp, 0, SEEK_END);
    int c = fgetc(fp);
    printf("fgetc = %d\n", c);
    printf("feof = %d\n", feof(fp) != 0);
    printf("ferror = %d\n", ferror(fp) != 0);
    fclose(fp);

    return 0;
}
