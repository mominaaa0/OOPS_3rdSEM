// 11/09/25
#include <stdio.h>
int main() {
    int choice;
    float balance = 0.0, amount;
    do {
        printf("\n=== Simple Banking System ===\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance Inquiry\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited: %.2f\n", amount);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid withdrawal amount!\n");
                } else if (amount > balance) {
                    printf("Insufficient balance! Available balance: %.2f\n", balance);
                } else {
                    balance -= amount;
                    printf("Withdrawn: %.2f\n", amount);
                }
                break;
            case 3: 
                printf("Current balance: %.2f\n", balance);
                break;
            case 4:
                printf("Exiting... Thank you for using our banking system!\n");
                break;
            default:
                printf("Invalid choice! Please select between 1 and 4.\n");
        }
    } while (choice != 4);
    return 0;
}
