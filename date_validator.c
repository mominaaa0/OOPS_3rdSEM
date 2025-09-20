// 11/09/25
#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}
int main() {
    int day, month, year;
    int daysInMonth;
    printf("Enter day, month, and year (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    if (year < 1) {
        printf("Invalid year!\n");
        return 0;
    }
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }
    if (month == 2)
        daysInMonth = isLeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        daysInMonth = 30;
    else
        daysInMonth = 31;
    if (day < 1 || day > daysInMonth) {
        printf("Invalid day for the given month/year!\n");
        return 0;
    }
    int q = day;
    int m = month;
    int y = year;
    if (m == 1 || m == 2) {
        m += 12;
        y -= 1;
    }
    int K = y % 100;
    int J = y / 100;
    int h = (q + (13 * (m + 1)) / 5 + K + (K / 4) + (J / 4) + (5 * J)) % 7;
    switch (h) {
        case 0: printf("Day of the week: Saturday\n"); break;
        case 1: printf("Day of the week: Sunday\n"); break;
        case 2: printf("Day of the week: Monday\n"); break;
        case 3: printf("Day of the week: Tuesday\n"); break;
        case 4: printf("Day of the week: Wednesday\n"); break;
        case 5: printf("Day of the week: Thursday\n"); break;
        case 6: printf("Day of the week: Friday\n"); break;
    }
    return 0;
}