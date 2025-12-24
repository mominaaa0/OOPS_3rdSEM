// 20/09/25

// sleep tracker

#include <stdio.h>

int main() {
    int days;
    printf("Enter number of nights to track: ");
    scanf("%d", &days);

    int total_sleep = 0, total_wakeups = 0;
    int good_nights = 0, light_nights = 0, poor_nights = 0;

    for(int i=1;i<=days;i++){
        int start, end, wakeups;
        printf("\nNight %d:\n", i);
        printf("Sleep start (24-hr): "); scanf("%d", &start);
        printf("Sleep end (24-hr): "); scanf("%d", &end);
        printf("Times woke up: "); scanf("%d", &wakeups);

        int sleep_hours = end - start;
        if(sleep_hours<0) sleep_hours+=24;
        total_sleep += sleep_hours;
        total_wakeups += wakeups;

        if(wakeups==0 && sleep_hours>=7) good_nights++;
        else if(wakeups<=2 && sleep_hours>=6) light_nights++;
        else poor_nights++;
    }

    printf("\n--- Sleep Summary ---\n");
    printf("Total sleep hours: %d\n", total_sleep);
    printf("Average sleep per night: %.2f\n", total_sleep/(float)days);
    printf("Total wake-ups: %d\n", total_wakeups);
    printf("Good sleep nights: %d\nLight sleep nights: %d\nPoor sleep nights: %d\n", good_nights, light_nights, poor_nights);

    return 0;
}
