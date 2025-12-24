// 20/09/25

// to do list with deadlines and durations

#include <stdio.h>
#include <string.h>

struct Task {
    char name[50];
    int duration; // in hours
    int deadline; // day by which task must be done
};

int main() {
    int n, i;
    printf("Enter number of tasks: ");
    scanf("%d", &n);

    struct Task tasks[n];
    for(i = 0; i < n; i++){
        getchar(); // consume newline
        printf("Enter name of task %d: ", i+1);
        fgets(tasks[i].name, sizeof(tasks[i].name), stdin);
        tasks[i].name[strcspn(tasks[i].name, "\n")] = 0;

        printf("Enter duration (hours) for %s: ", tasks[i].name);
        scanf("%d", &tasks[i].duration);

        printf("Enter deadline day (1 = today, 2 = tomorrow,...): ");
        scanf("%d", &tasks[i].deadline);
    }

    printf("\n--- Suggested Task Order ---\n");

    // Sort tasks by earliest deadline (simple bubble sort)
    for(i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(tasks[j].deadline > tasks[j+1].deadline){
                struct Task temp = tasks[j];
                tasks[j] = tasks[j+1];
                tasks[j+1] = temp;
            }
        }
    }

    int total_hours = 0;
    for(i = 0; i < n; i++){
        printf("%s (Duration: %d hrs, Deadline Day: %d)\n", tasks[i].name, tasks[i].duration, tasks[i].deadline);
        total_hours += tasks[i].duration;
    }

    printf("\nTotal Hours Needed: %d\n", total_hours);
    return 0;
}
