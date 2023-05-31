#include <stdio.h>

int main() {
    int month;
    int year;
    int day;

    printf("Enter the month number: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);


    if (month == 2) { //Проверка того, что год високосный
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { //Каждый четвертый, но не столетний год является високосным, при этом каждый 400-й год всё же является високосным
            day = 29; //Високосный
        } else {
            day = 28; //Не високосный
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { //Проверка что пользователь ввел апрель, июнь, сентябрь, ноябрь
        day = 30;
    } else {
        day = 31;
    }

    printf("Number of days in the month: %d\n", day);

    return 0;
}


