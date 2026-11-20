#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // --- For Loop Activity ---
    printf("=== For Loop: 100 down to 50 ===\n");
    for (int i = 100; i >= 50; i--) {
        printf("%d\n", i);
    }
    printf("\n");

    // --- While Loop 1: ATM Withdrawal ---
    printf("=== While Loop: ATM Withdrawal ===\n");
    float balance = 5000.0; // Starting sample balance
    float withdrawal;

    while (balance > 0) {
        printf("Current Balance: %.2f KES\n", balance);
        printf("Enter amount to withdraw (or 0 to exit): ");
        scanf("%f", &withdrawal);

        if (withdrawal <= 0) break;

        if (withdrawal > balance) {
            printf("Insufficient funds!\n");
        } else {
            balance -= withdrawal;
            printf("Withdrawal successful. Remaining balance: %.2f KES\n", balance);
        }
    }
    printf("Final Balance: %.2f KES\n\n", balance);

    // --- While Loop 2: Number Guessing Game ---
    printf("=== While Loop: Number Guessing Game ===\n");
    srand(time(0));
    int secretNumber = (rand() % 20) + 1;
    int guess;
    int attempts = 0;

    printf("Guess a number between 1 and 20:\n");
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it.\n");
            break;
        }
    }
    printf("Total attempts: %d\n\n", attempts);

    // --- Do-While Loop: Password System ---
    printf("=== Do-While Loop: Password System ===\n");
    int password;
    do {
        printf("Enter password: ");
        scanf("%d", &password);
        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }
    } while (password != 1234);

    printf("Access Granted\n");

    return 0;
}
