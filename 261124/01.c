#include<stdio.h>
int *find_max(int *arr, int n);

int main(){
    int arr[5] = {42, 145, 41, 451, 435};
    int *p = find_max(arr, 5);
    if(p!=NULL){
        printf("The max number in array is %d", *p);
    }
    return 0;
}

int *find_max(int *arr, int n){
    if(arr==NULL||n<=0){
        printf("Invalid value!");
        return NULL;
    }
    int num = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[num]){
            num = i;
        }
    }
    return arr + num;
}
