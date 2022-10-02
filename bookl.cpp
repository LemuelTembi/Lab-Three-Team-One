//  file name -- book.cpp
//  This file contains the implementations of the member function of
//  Book class.

//  ========================= header files =======================
#include <iostream>                       // for console I/O
#include <string>                         // for string library
#include <cstring>                       // for c string library
#include "book.h"                   // for Employee class

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

   bookType = 'n';
   bookStatus = 3;
   currentPage = 0;
   price = 0;

} // end of value constructor

// accessor functions to retrieve content of private member variables
string Book::getISBN()
{
   return ISBN;
}

string Book::getTitle()
{
   return title;
}

string Book::getAuthor()
{
   return author;
}

float Book::getPrice()
{
   return price;
}

char Book::getBookType()
{
   return bookType;
}

int Book::getBookStatus()
{
   return bookStatus;
}

int Book::getPages()
{
   return numPages;
}

int Book::getCurrentPage()
{
   return currentPage;
}

// mutator functions. These will change the values assigned 
// to private variables in the book class
void Book::acquireBook(char newBookStatus , int newBookType, float amtPaid)
{
    // checks if the value of newBookSatus is equal to 'r' or 'a' and assigns 
    // that value to the private variable bookStatus in the Book class
    // if not, the value of the variable bookStatus stays the same
    if (tolower(newBookStatus) == 'r' || tolower(newBookStatus) == 'a')
    {
        bookStatus = newBookStatus;
    }
    else
    {
        bookStatus = bookStatus;
    }

    // checks if the value of newBookType is equal to 1 or 2 and assigns 
    // that value to the private variable bookType in the Book class
    // if not, the value of the variable bookType stays the same
    if (newBookType == 1 || newBookType == 2)
    {
        bookType= newBookType;
    }
    else
    {
        bookType = bookType;
    }

    // checks if the value of newBookSatus is equal to 'r' or 'a'. 
    // if it is, it assignes the value of amtPaid private variable 
    // price in the Book class. if not, the value of the variable`
    // price stays the same
    if (tolower(newBookType) == 'r' || tolower(newBookType) == 'a')
    {
        price = amtPaid;
    }
    else
    {
        price = price;
    }
}

void Book::readPage()
{
   // checks if bookType is not equal to 3 and you are not on
   // the last page, then it checks if adding 1 to  
   // currentPage will go beyond the max number of pages
   // if not, it adds 1 to currentPage and assigns it to 
   // currentPage
   if ((bookType != 3) && (currentPage < numPages))
   {
      if (currentPage + 1 < numPages)
      {
         currentPage += 1;
      }
   }
}

void Book::jumpPages(int addPages)
{
   // checks if bookType is not equal to 3 and you are not on
   // the last page, then it checks if adding the value of    
   // addPages to currentPage will go beyond the max number of
   // pages. If not, it adds the value of addPages to currentPage
   // and assign it to currentPage
   if ((bookType != 3) && (currentPage < numPages))
   {
      if (currentPage + addPages < numPages)
      {
         currentPage += addPages;
      }
   }
}

void Book::backup(int subPages)
{
   // checks if bookType is not equal to 3 and you are not on
   // the first page, then it checks if subtracting the value of    
   // subPages from currentPage will go beyond the first page.  
   // If not, it subtracts the value of subPags from currentPage
   // and assign it to currentPage
   if ((bookType != 3) && (currentPage != 1))
   {
      if (currentPage - subPages > 0)
      {
         currentPage -= subPages;
      }
   }
}

void Book::returnBook()
{
    // checks if bookType is equal to 2 and the assigns
    // some values to some variables
    if (bookType == 2)
    {
         bookType = 3;
         bookStatus = 'n';
         price = 0.0;
    }
}
