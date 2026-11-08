#include <stdio.h>
int main(){
    printf("%d\n",15+8);
    printf("%f\n",128+12.9);
    printf("请输入两个一百以内的整数:\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("两数之和为:%d\n",a+b);
    printf("请输入两个一百以内的浮点数:\n");
    float c,d;
    scanf("%f %f",&c,&d);
    printf("两数之和为:%f\n",c+d);
    int i,sum=0;
    for(i=1;i<=100;i++){
        sum+=i;
    }
    printf("一到一百的和为:%d\n",sum);
    return 0;
}