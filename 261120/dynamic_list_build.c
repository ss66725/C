#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[20];
    int age;
    struct student *next;
};
typedef struct student Student;

int main(){
    Student *head = NULL;
    Student *tail = NULL;
    char *name[3] = {"Tom", "Mike", "Jane"};
    int age[3] = {5, 15, 67};
    for(int i=0;i<3;i++){
        Student *p = malloc(sizeof(Student));
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
    Student *p;
    p = head;
    for(;p!=NULL;p=p->next){
        printf("%s\t%d\n", p->name, p->age);
    }
    while(head!=NULL){
        Student *temp = head;
        head = temp->next;
        free(temp);
    }
    return 0;
}