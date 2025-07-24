//
//  main.c
//  7. Basit ATM Uygulaması (Para çekme, yatırma)
//
//  Created by gözde on 8.06.2025.
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Declare variables
    int password, input_password, choice, amount;
    
    password = 1456;  // preset password for the ATM simulation
    
    // Ask the user to enter their password
    printf("Please enter your password:\n");
    scanf("%d", &input_password);
    
    // Check if the entered password is correct
    if (input_password == password) {
        // If correct, show operation choices to the user
        printf("Password is correct. Please choose the operation you want to perform:\n");
        printf("1. Withdraw money    2. Deposit money\n");
        printf("Enter the number of your choice:\n");
        scanf("%d", &choice);
        
        // If user selects 'Withdraw money'
        if (choice == 1) {
            // Ask for the amount to withdraw
            printf("Enter the amount of money you want to withdraw:\n");
            scanf("%d", &amount);
            // Display confirmation message
            printf("%d TL is prepared. You can take it from the ATM cash dispenser.\n", amount);
        }
        
        // If user selects 'Deposit money'
        if (choice == 2) {
            // Ask for the amount to deposit
            printf("Enter the amount of money you want to deposit:\n");
            scanf("%d", &amount);
            // Display confirmation message
            printf("%d amount has been added to your bank account.\n", amount);
        }
    }
    else {
        // If password is incorrect, show error message
        printf("Wrong password, please try again.\n");
    }
    
    return 0;  // End of the program
}
