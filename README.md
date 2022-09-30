# Lab-Three-Team-One

CSCI 220  Assignment #3, Fall 2022

In this assignment, you will implement a class named Book. Each book has an ISBN (International Standard Book Number) for identification, a title, author(s), book type, number of pages, current page, book status, and price. The ISBN is represented as a 13-character string, the title of a book is of string type as is the name(s) of author(s). The book type is a character (R/r - recreational, A/a - academic, N/n-neither). The number of pages and current page are integers. The book status is an integer (1- purchased, 2-rented, 3-neither of these), and price is of float type. 

Design the class named Book. Create the header file named book.h to define the Book class. The class has eight member variables: ISBN, title, author, book type, number of pages, current page, book status, and price. In addition to the member variables, it also has one constructor which has eight parameters: ISBN, title, author, book type, number of pages, current page, book status, and price. The constructor uses the data passed to it to initialize the member variables. The class also has eight member functions, each returning one of the member variables: getISBN, getTitle, getAuthor, getBookType, getNumberPages, getCurrentPage, getBookStatus, and getPrice.

A person can use the Book to navigate their reading. The Book has 5 controls (member functions) to mimic the buttons/features below. The functions of these buttons are described in the table below.

