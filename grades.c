// 11/09/25
#include <stdio.h>
int main() {
    int marks[5];
    int i, failCount = 0, total = 0;
    float percentage;
    printf("Enter marks of 5 subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] < 40) {
            failCount++;
        }
    }
    if (failCount > 1) {
        printf("Repeat Year\n");
    } else {
        percentage = total / 5.0;
        if (percentage >= 90) {
            printf("Grade: A\n");
        } else if (percentage >= 75) {
            printf("Grade: B\n");
        } else if (percentage >= 60) {
            printf("Grade: C\n");
        } else if (percentage >= 40) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F\n");
        }
    }
    return 0;
}
