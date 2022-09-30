//  file name -- book.cpp
//  This file contains the implementations of the member function of
//  Book class.

//  ========================= header files =======================
#include<iostream>                      // for console I/O
#include<cstring>                       // for c string library
#include "employee.h"                   // for Employee class

//  ======================= namespaces used ======================
using namespace std;                    // for std functions


Book::Book(string newISBN, string newTitle,
            string newAuthor, int newNumPages)
// purpose: intialize the data members with values
// precondition: none
// postcondition: the new variables should be able to change the content
// of the private variables.
{
   ISBN = newISBN;
   title = newTitle;
   author = newAuthor;
   numPages = newNumPages;

} // end of value constructor

// accessor functions to retrieve content of member variables (private)
string getISBN()
{
   return ISBN;
}

string getTitle()
{
   return title;
}

string getAuthor()
{
   return author;
}

float getPrice()
{
   return price;
}

char getBookType()
{
   return bookType;
}

int getBookStatus()
{
   return bookStatus;
}

int getPages()
{
   return getPages;
}

int getCurrentPage()
{
   getCurrentPage;
}
