// 20/09/25

// time table generator

#include <stdio.h>
#include <string.h>
struct Subject {
    char name[50];
    int hours;
};
int display_hour(int h) {
    int hr = h % 12;
    if (hr == 0) hr = 12;
    return hr;
}
int main() {
    int uni_start, uni_end;
    int study_start, study_end;
    int n, i, total_study_time = 0;
    printf("Enter University Start Time (24-hr): ");
    scanf("%d", &uni_start);
    printf("Enter University End Time: ");
    scanf("%d", &uni_end);
    if (uni_start < 0 || uni_start > 23 || uni_end <= uni_start || uni_end > 23) {
        printf("Invalid university timings!\n");
        return 0;
    }
    printf("\nEnter Study Start Time (after university): ");
    scanf("%d", &study_start);
    printf("Enter Study End Time: ");
    scanf("%d", &study_end);
    if (study_start < uni_end || study_start > 23 || study_end <= study_start || study_end > 23) {
        printf("Invalid study timings!\n");
        return 0;
    }
    int available_time = study_end - study_start;
    printf("\nHow many subjects do you want to study? ");
    scanf("%d", &n);
    struct Subject subs[n];
    getchar(); // consume leftover newline
    for (i = 0; i < n; i++) {
        printf("Enter name of subject %d: ", i + 1);
        fgets(subs[i].name, sizeof(subs[i].name), stdin);
        subs[i].name[strcspn(subs[i].name, "\n")] = 0; // remove newline
        printf("Enter required hours for %s: ", subs[i].name);
        scanf("%d", &subs[i].hours);
        getchar(); // consume newline
        total_study_time += subs[i].hours;
    }
    if (total_study_time > available_time) {
        printf("\nWarning: You don't have enough time! Available: %d, Required: %d\n", available_time, total_study_time);
    }
    printf("\n--------- Generated Timetable ---------\n");
    int current_time = study_start;
    for (i = 0; i < n; i++) {
        if (current_time + subs[i].hours <= study_end) {
            printf("%02d:00 - %02d:00  %s\n", display_hour(current_time), display_hour(current_time + subs[i].hours), subs[i].name);
            current_time += subs[i].hours;
        } else {
            printf("%02d:00 - %02d:00  %s (Partially Covered)\n", display_hour(current_time), display_hour(study_end), subs[i].name);
            break;
        }
    }
    printf("--------------------------------------\n");
    return 0;
}  