//
//  main.c
//  kütüphane takip sistemi
//
//  Created by gözde on 20.07.2025.
//
#include <stdio.h>
#include <time.h>

// Structure to hold book information
struct book {
    char bookname[20];
    char witername[20]; // likely meant to be 'writername'
    int number;
    int shelfno;
};

// Structure to hold person (borrower) information
struct person {
    char personname[20];
    char borrowedbook[20];
    int phone;
};

int main(int argc, const char * argv[]) {
    struct book k1, k2;             // Two book records
    struct person prs, prs1;        // Two person records (only prs1 used)
    int number, shelf, choice;

    // Ask the user what they want to do
    printf("Press 1 to enter a book. If a person wants to borrow a book, press 2: ");
    scanf("%d", &number);

    if (number == 1) {
        // Input book information
        printf("Please enter the book name, author name, book number, and shelf number:\n");
        scanf("%s %s %d %d", k1.bookname, k1.witername, &k1.number, &k1.shelfno);

        shelf = k1.shelfno;

        // Option to view shelf status
        printf("Press 0 to view the shelf status: ");
        scanf("%d", &number);

        if (number == 0) {
            printf("Enter the shelf number you want to check: ");
            scanf("%d", &choice);

            if (choice == shelf) {
                printf("Shelf %d - Book: %s | Author: %s | Number: %d\n",
                       k1.shelfno, k1.bookname, k1.witername, k1.number);
            }
        }

        // If someone borrows a book
        if (number == 2) {
            printf("Enter borrower's name, borrowed book name, and phone number:\n");
            scanf("%s %s %d", prs1.personname, prs1.borrowedbook, &prs1.phone);
        }

        // Ask again to enter another book or assign to person
        printf("Press 1 to enter another book. Press 2 to assign a book to a person: ");
        scanf("%d", &number);

        if (number == 1) {
            // Input second book info
            printf("Enter book name, author name, number, and shelf number:\n");
            scanf("%s %s %d %d", k2.bookname, k2.witername, &k2.number, &k2.shelfno);

            // Write book to file
            FILE* fpr = fopen("dosya.txt", "a");
            if (fpr != NULL) {
                fprintf(fpr, "Book Name: %s | Author: %s | Number: %d | Shelf: %d\n",
                        k2.bookname, k2.witername, k2.number, k2.shelfno);
                fclose(fpr);
            } else {
                printf("Error opening file.\n");
            }

            // Shelf check again
            shelf = k2.shelfno;
            printf("Press 0 to view shelf status: ");
            scanf("%d", &number);

            if (number == 0) {
                printf("Enter the shelf number you want to check: ");
                scanf("%d", &choice);
                if (choice == shelf) {
                    printf("Shelf %d - Book: %s | Author: %s | Number: %d\n",
                           k2.shelfno, k2.bookname, k2.witername, k2.number);
                }
            }

            // Borrower info again
            if (number == 2) {
                printf("Enter borrower's name, borrowed book name, and phone number:\n");
                scanf("%s %s %d", prs1.personname, prs1.borrowedbook, &prs1.phone);
            }
        }

        return 0;
    }
}
