#include <stdio.h>

int main(){
    int day;
    int month;
    printf("Please enter the day of the week:");
    scanf("%d",&day);

    switch(day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day!\n");
            break;
    }

    printf("Please enter the month of the year: ");
    scanf("%d",&month);

switch(month){
    case 3:
    case 4:
    case 5:
        printf("It's spring!\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("It's summer!\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("It's autumn!\n");
        break;
    case 12:
    case 1:
    case 2:
        printf("It's winter!\n");
        break;
    default:
        printf("Invalid month!\n");
        break;
}

    return 0;
}
