#include <stdio.h>

struct student {
    char name[20];
    int age;
    struct student *next;
};

void print_list(struct student *head);

int main(void) {
    struct student s1 = {"arctan", 4, NULL};
    struct student s2 = {"arcsin", 2, NULL};
    struct student s3 = {"arccos", 6, NULL};

    s1.next = &s2;
    s2.next = &s3;
    s3.next = NULL;

    print_list(&s1);
    printf("\n");

    /* 在 s2 和 s3 之间插入 s4：先接后断 */
    struct student s4 = {"arctanh", 8, NULL};

    s4.next = &s3;
    s2.next = &s4;

    print_list(&s1);

    return 0;
}

void print_list(struct student *head) {
    for (struct student *p = head; p != NULL; p = p->next) {
        printf("%s %d\n", p->name, p->age);
    }
}
