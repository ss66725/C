#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[20];
    int age;
    struct student *next;
};

int main(){
    char *name[3] = {"arctan", "arcsin", "arccos"};
    int age[3] = {2, 4, 6};
    struct student *head = NULL;
    struct student *tail = NULL;
    for(int i = 0;i < 3;i ++){
        struct student *s = malloc(sizeof(struct student));
        strcpy(s->name, name[i]);
        s->age = age[i];
        s->next = NULL;
        if(head == 0){
            head = s;
        }
        else{
            tail->next = s;
        }
        tail = s;
    }

    for(struct student *p = head;p != NULL;p = p->next){
        printf("%s %d\n", p->name, p->age);
    }

    while(head != NULL){
        struct student *t = head;
        head = head->next;
        free(t);
    }
    
    return 0;
}