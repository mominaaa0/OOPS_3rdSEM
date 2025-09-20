// 18/09/25
#include <stdio.h>

int main() {
    int emp_id, hours, emp_count = 0;
    double rate, total_payroll = 0;

    printf("Enter employee data (ID -1 to stop):\n");

    while (1) {
        printf("Employee ID: ");
        scanf("%d", &emp_id);
        if (emp_id == -1) break;

        printf("Hourly rate: ");
        scanf("%lf", &rate);
        printf("Hours worked: ");
        scanf("%d", &hours);

        double gross;
        if (hours <= 40)
            gross = hours * rate;
        else
            gross = 40 * rate + (hours - 40) * rate * 1.5;

        double net = gross - (0.03625 * gross);

        printf("Employee %d Net Salary: %.2f\n", emp_id, net);
        total_payroll += net;
        emp_count++;
    }

    if (emp_count > 0) {
        printf("Total Payroll: %.2f\n", total_payroll);
        printf("Average Payroll: %.2f\n", total_payroll / emp_count);
    }

    return 0;
}
