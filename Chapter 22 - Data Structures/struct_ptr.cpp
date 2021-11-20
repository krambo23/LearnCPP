// pg 158, 159

#include <iostream>
#include <cstring>

using namespace std;

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books *book)
{
    cout << "Book Title : " << book->title << endl; 
    cout << "Book Author : " << book->author << endl; 
    cout << "Book Subject : " << book->subject << endl; 
    cout << "Book Id : " << book->book_id << endl;
}

int main()
{
    struct Books book1, book2;

    // Book 1 Specs
    strcpy(book1.title, "Learn C++ Programming");
    strcpy(book1.author, "Chand Miyan");
    strcpy(book1.subject, "C++ Programming");
    book1.book_id = 69;

    // Book 2 Specs
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Yakit Singha");
    strcpy(book2.subject, "Telecom");
    book2.book_id = 420;

    // Print Book 1 Specs
    printBook(&book1);

    cout << endl;

    // Print Book 2 Specs
    printBook(&book2);

    return 0;
}