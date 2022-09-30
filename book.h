#ifndef CLASS_BOOK_
#define CLASS_BOOK_

class Book
{
   private:
      string ISBN;
      string title;
      string author;
      char bookType; //R/r - recreational, A/a - academic, N/n-neither
      int bookStatus;//1- purchased, 2-rented, 3-neither of these
      int numPages;
      int currentPage;
      float price;  // amount paid to purchase or rent book

   public:
      Book(string, string, string, int);

      string getISBN();
      string getTitle();
      string getAuthor();
      float getPrice();
      char getBookType();
      int getBookStatus();
      int getPages();
      int getCurrentPage();

      void acquireBook(char, int, float);
      void readPage();
      void jumpPages(int);
      void backup(int);
      void returnBook();

}; // class Book

#endif
