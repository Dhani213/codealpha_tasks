#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank user;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &user.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", user.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &user.balance);

    do {
        printf("\n====== BANK MENU ======\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance Enquiry\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                user.balance += amount;

                printf("Amount Deposited Successfully.\n");
                printf("Current Balance: %.2f\n", user.balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= user.balance) {
                    user.balance -= amount;

                    printf("Withdrawal Successful.\n");
                    printf("Remaining Balance: %.2f\n", user.balance);
                } else {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 3:
                printf("Account Number: %d\n", user.accNo);
                printf("Account Holder: %s\n", user.name);
                printf("Current Balance: %.2f\n", user.balance);
                break;

            case 4:
                printf("Thank You for Using Banking System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}
