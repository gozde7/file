# Library Management System in C

A simple C console application to manage a basic library system. It allows users to add books, assign them to shelves, and record borrowers.

## Features

- Add a book with:
  - Book name
  - Author name
  - Unique book number
  - Shelf number
- View shelf contents by number
- Optionally record the person who borrowed the book
- Save book data to a text file (`dosya.txt`)

## Files

- `main.c` – Main source file
- `dosya.txt` – File where added books are saved (created during runtime)

##  How to Run

1. **Compile the project:**

```bash
gcc main.c -o library
