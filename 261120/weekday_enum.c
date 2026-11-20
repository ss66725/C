#include <stdio.h>

enum weekday { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

int main(){
    enum weekday d;
    int asw;

    printf("Please enter a day number (1-7):\n");
    scanf("%d", &asw);
    d = asw;

    switch (d) {
        case MON:
            printf("Monday\n");
            break;
        case TUE:
            printf("Tuesday\n");
            break;
        case WED:
            printf("Wednesday\n");
            break;
        case THU:
            printf("Thursday\n");
            break;
        case FRI:
            printf("Friday\n");
            break;
        case SAT:
            printf("Saturday\n");
            printf("It is weekend.\n");
            break;
        case SUN:
            printf("Sunday\n");
            printf("It is weekend.\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }

    return 0;
}
