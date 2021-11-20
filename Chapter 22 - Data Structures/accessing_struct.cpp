// pg 154, 155

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
    cout << "Book 1 Title : " << book1.title << endl; 
    cout << "Book 1 Author : " << book1.author << endl; 
    cout << "Book 1 Subject : " << book1.subject << endl; 
    cout << "Book 1 Id : " << book1.book_id << endl;

    cout << endl;

    // Print Book 2 Specs
    cout << "Book 2 Title : " << book2.title << endl;
    cout << "Book 2 Author : " << book2.author << endl;
    cout << "Book 2 Subject : " << book2.subject << endl;
    cout << "Book 2 Id : " << book2.book_id << endl;

    return 0;
}