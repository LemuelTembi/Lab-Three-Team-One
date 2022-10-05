//  file name -- book.cpp
//  This file contains the implementations of the member function of
//  Book class.

//  ========================= header files =======================
#include <iostream>
#include <string>
#include <cstring>
#include "book.h"

//  ======================= symbolic constrantes =================
const int MIN = 1;
const int MAX = 7;
const int DECIMAL = 2;
const int librarySize = 20;

//  ======================= namespaces used ======================
using namespace std;

// ======================== function prototypes ==================

void displayMenu();
void getChoice(int&);
void takeAction(int, Book&);
void addNewKnownBook(string, string, string);
void newUnknownBook();

//int library[librarySize];
//int &bookIndex;

Book book1("3972640326748","Lord of the rings", "Jrr Token", 200);

int main(){//beginning of int main

    /*for (int i = 0; i < librarySize; i++)
    {
         cout << library[i] << endl << endl;
    }*/

    int choice;

    do
   {
      displayMenu();
      getChoice(choice);
      takeAction(choice, book1);
   } while (choice != MAX);

   return 0;

}// end of main

/*void addNewKnownBook(string ISBN, string bookTitle, string author, int numPages)
{
   bookIndex = 0;
   Book bookTitle(ISBN, bookTitle, author, numPages);

}

void addNewUnknownBook (string bookName)
{
   Book bookTitle();
}
*/
void displayMenu()
// this funciton displays the main menu of the program
{
    cout << "*********************************" << endl;
    cout << "Test book driver" << endl;
    cout << "1.  Acquire Book button" << endl;
    cout << "2.  Press Read button" << endl;
    cout << "3.  Press Jump button" << endl;
    cout << "4.  Press Backup button" << endl;
    cout << "5.  Press Return Book button" << endl;
    cout << "6.  Display book state" << endl;
    cout << "7.  Exit" << endl;
    cout << "please enter your choice: ";
}// end of the main menu

void getChoice(int &option)
//this function asks the user to input a choice based on the menu options.
//if the user inputs a value that is out of bounds, the function will ask them
//to reenter the value. this will continue until the user inputs a value that
//is int he bounds.
{
   do
   {
      cin >> option;
      if (option < MIN || option > MAX)
      {
         cout << "The choice: "
              << option
              << " is out of bounds of the given range a values ."
              << endl;
         cout << "Please enter the value agine ";
      }
   } while (option < MIN || option > MAX);
}// end of function getChoice

void takeAction(int choice, Book &book1)
{
    int newBookStatus;
    char newBookType;
    int addPages;
    int subPages;
    float amtPaid;

    switch(choice)
    //switch statment to do the required action based on the
    //choice of the user.
    {
        case 1: cout << endl << "Option 1 was selected... " << endl;
                cout << "Please enter book Type(R/r for recreational, A/a for academic, N/n-neither): ";
                cin >> newBookType;
                cin.ignore(200, '\n');
                cout << "Please enter book status(1- purchased, 2-rented, 3-neither of these): ";
                cin >> newBookStatus;
                cin.ignore(200, '\n');
                cout << "Please enter amount paid for book: ";
                cin >> amtPaid;
                cin.ignore(200, '\n');
                book1.acquireBook(newBookStatus, newBookType, amtPaid);

                cout << endl;
                break;

        case 2: cout << "option 2 was selected... " << endl;
                if (book1.getBookStatus() != 3)
                {
                   book1.readPage();
                   cout << "Page read!" << endl;
                }
                else
                {
                   cout << endl << "You cannot read this book. You have neither purchased it nor rented it" << endl;
                }
                cout << endl;
                break;

        case 3: cout << "option 3 was selected... " << endl;
                if (book1.getBookStatus() != 3)
                {
                   cout << "please enter the number of pages you want to go forward: ";
                   cin >> addPages;
                   if (addPages > book1.getPages() || addPages > book1.getPages() - book1.getCurrentPage())
                   {
                      cout << endl << "You cannot jump by " << addPages << " pages. It is more than the number of pages the book has..." << endl;
                   }
                   else if (addPages < 0)
                   {
                      cout << endl << "You cannot jump page by a negative number..." << endl;
                   }
                   else
                   {
                      book1.jumpPages(addPages);
                      cout << endl << "You went forward by " << addPages << " number of pages!" << endl;
                   }
                   cout << endl;
                }
                else
                {
                   cout << endl << "You cannot read this book. You have neither purchased it nor rented it" << endl;
                }
                break;

        case 4: cout << endl << "option 4 was selected... " << endl;
                if (book1.getBookStatus() != 3)
                {
                   cout << "please enter the number of pages you want to go backwards: ";
                   cin >> subPages;
                   if (subPages > book1.getCurrentPage())
                   {
                      cout << endl << "You cannot backup more than " << book1.getCurrentPage() << " number of pages" << endl;
                   }
                   else if (addPages < 0)
                   {
                      cout << endl << "You cannot jump page by a negative number..." << endl;
                   }
                   else
                   {
                      book1.backup(subPages);
                      cout << "You went backwards by " << subPages << " number of pages!" << endl;
                   }
                   cout << endl;
                }
                else
                {
                   cout << endl << "You cannot read this book. You have neither purchased it nor rented it" << endl;
                }
                break;

        case 5: cout << endl << "option 5 was selected... " << endl;
                if (book1.getBookStatus() == 2)
                {
                   book1.returnBook();
                   cout << "you have returned to book. ";
                }
                else
                {
                   cout << endl << "You can only return a book you rented!" << endl;
                }
                cout << endl;
                break;

        case 6: cout << "option 6 was selected "<< endl;
                cout << "the state of the book will now be displayed:" << endl << endl;
                cout << "**************************************************" << endl;
                cout << "The Book title is: " << book1.getTitle() << endl;
                cout << "The Book type is: " << book1.getBookType() << endl;
                cout << "The Book Status is: " << book1.getBookStatus() << endl;
                cout << "The number of pages of the book is: " << book1.getPages() << endl;
                cout << "The current page of the book is: " << book1.getCurrentPage() << endl;
                cout << endl;
                break;

        default:
                break;

    }
}


