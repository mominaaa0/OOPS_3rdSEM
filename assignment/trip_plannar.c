// 20/09/25

// trip planner with budget and duration optimization

#include <stdio.h>
#include <string.h>

struct City {
    char name[30];
    int cost;
    int duration;
};

int main() {
    int n, budget;
    printf("Enter number of cities: "); scanf("%d",&n);
    struct City cities[n];

    for(int i=0;i<n;i++){
        getchar();
        printf("City %d name: ", i+1);
        fgets(cities[i].name,sizeof(cities[i].name),stdin);
        cities[i].name[strcspn(cities[i].name,"\n")]=0;

        printf("Cost to visit %s: ", cities[i].name); scanf("%d",&cities[i].cost);
        printf("Duration (hours) in %s: ", cities[i].name); scanf("%d",&cities[i].duration);
    }

    printf("Enter budget: "); scanf("%d",&budget);

    int selected[n];
    for(int i=0;i<n;i++) selected[i]=0;
    int total_cost=0;

    // Simple greedy: pick cheapest cities first
    for(int i=0;i<n;i++){
        int min_idx=-1, min_cost=1000000;
        for(int j=0;j<n;j++){
            if(!selected[j] && cities[j].cost<min_cost){
                min_cost=cities[j].cost;
                min_idx=j;
            }
        }
        if(min_idx!=-1 && total_cost+cities[min_idx].cost<=budget){
            selected[min_idx]=1;
            total_cost+=cities[min_idx].cost;
        }
    }

    printf("\n--- Optimized Trip Plan ---\n");
    for(int i=0;i<n;i++){
        if(selected[i])
            printf("Visit %s (Cost: %d, Duration: %d hrs)\n", cities[i].name, cities[i].cost, cities[i].duration);
    }
    printf("Total cost: %d\n", total_cost);

    return 0;
}
