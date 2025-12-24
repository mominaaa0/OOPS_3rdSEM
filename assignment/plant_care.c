// 20/09/25

// plant care and recovery suggestions

#include <stdio.h>
#include <string.h>

struct Plant {
    char name[30];
    int watering_days;
    char status[20]; // normal/yellow
};

int main() {
    int n, day;
    printf("Enter number of plants: "); scanf("%d",&n);

    struct Plant plants[n];
    for(int i=0;i<n;i++){
        getchar();
        printf("Plant %d name: ", i+1);
        fgets(plants[i].name,sizeof(plants[i].name),stdin);
        plants[i].name[strcspn(plants[i].name,"\n")]=0;

        printf("Watering frequency (days): "); scanf("%d",&plants[i].watering_days);
        printf("Status (normal/yellow): "); scanf("%s",plants[i].status);
    }

    printf("Current day: "); scanf("%d",&day);

    printf("\n--- Plant Care ---\n");
    for(int i=0;i<n;i++){
        if(day % plants[i].watering_days==0)
            printf("%s: Water today!\n", plants[i].name);
        else
            printf("%s: No watering needed today.\n", plants[i].name);

        if(strcmp(plants[i].status,"yellow")==0){
            printf("%s: Yellow plant detected!\n", plants[i].name);
            printf("Suggested recovery: Check sunlight, water properly, add fertilizer, prune damaged leaves.\n");
        }
    }
    return 0;
}
