#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[20];
    int age;
    struct student *next;
};

int main(){
    struct student *head = NULL;
    struct student *tail = NULL;
    char *name[3] = {"Tom", "Mike", "Jane"};
    int age[3] = {5, 15, 67};
    for(int i=0;i<3;i++){
        struct student *p = malloc(sizeof(struct student));
        strcpy(p->name, name[i]);
        p->age = age[i];
        p->next = NULL;
        if(head==NULL){
            head = p;
        }
        else{
            tail->next = p;
        }        
        tail = p;
    }
    struct student *p;
    p = head;
    for(;p!=NULL;p=p->next){
        printf("%s\t%d\n", p->name, p->age);
    }
    while(head!=NULL){
        struct student *temp = head;
        head = temp->next;
        free(temp);
    }
    return 0;
}