//
//  main.c
//  Asal Sayı Bulucu
//
//  Created by gözde on 8.06.2025.
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;       // variable to store the input number
    int not_prime = 0;  // flag indicating if the number is not prime (0 means prime initially)
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number <= 1) {
        printf("This number is not prime");
    }
    
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            not_prime = 1;  // set flag if divisor found
            break;          // exit loop early
        }
    }
    
    if (not_prime == 1) {
        printf("It is not a prime number \n");
    }
    else {
        printf("It is a prime number \n");
    };
    
    return 0;
}
