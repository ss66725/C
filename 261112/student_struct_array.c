#include<stdio.h>
#include<string.h>

struct student{
        char name[20];
        int age;
        int grade;
    };

void print_student(struct student s);
struct student* find_oldest(struct student *s, int n);

int main(){
    struct student s1;
    strcpy(s1.name, "Claude");
    s1.age = 1;
    s1.grade = 1;
    print_student(s1);
    
    struct student stus[3];
    char *name[3]= {"Mike", "Jack", "Tony"};
    int age[3] = {21, 14, 7};
    int grade[3] = {3, 9, 2};
    for(int i = 0;i <3;i++){
        strcpy(stus[i].name, name[i]);
        stus[i].age = age[i];
        stus[i].grade = grade[i];
        print_student(stus[i]);
    }

    struct student *oldest = find_oldest(stus, 3);
    print_student(*oldest);
    return 0;
}

void print_student(struct student s){
    printf("name: %s\n", s.name);
    printf("age: %d\n", s.age);
    printf("grade: %d\n", s.grade);
    printf("\n");
}

struct student* find_oldest(struct student *s, int n){
    struct student* max;
    max = &s[0];
    for(int i = 0;i < n;i++){
        if((s + i)->age > max->age){
            max = &s[i];
        }
    }
    return max;
}

