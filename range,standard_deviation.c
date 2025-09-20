// 18/09/25
#include <stdio.h>
#include <math.h>

int main() {
    int n, num, smallest, largest;
    double sum = 0, sum_squares = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    scanf("%d", &num);
    smallest = largest = num;
    sum = num;
    sum_squares = num * num;

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;
        sum += num;
        sum_squares += num * num;
    }

    double average = sum / n;
    double std_dev = sqrt((sum_squares / n) - (average * average));

    printf("Range: %d\n", largest - smallest);
    printf("Standard Deviation: %.2f\n", std_dev);

    return 0;
}
