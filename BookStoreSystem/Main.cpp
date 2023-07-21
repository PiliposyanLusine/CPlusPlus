#include "System.h"
#include "User.h"
#include "Book.h"
#include <iostream>

int main()
{
    User user1("name1", "info1");
    Book book1("sfsdf","vsdfs","fdsds", 1233);
    Book book2("sfscsdf","vsdfs","fdsds", 22233);
    System system;
    system.addBook(book1);
    system.addBook(book2);
    system.AddToCartBook(book1);
    system.TotalPrice(user1);
    system.file(user1);
}