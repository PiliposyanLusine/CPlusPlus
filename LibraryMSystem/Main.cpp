#include <iostream>
#include "Book.h"
#include "User.h"
#include "System.h"

int main()
{
    User user1("name1", "info1", "dscfds");
    User user2("name2", "info2","fdsfs");
    User user3("name3", "info3","fdsf");

    Book book1("sfsdfds", "fdsfds", "fdsfs");
    Book book2("dsdsfds", "dfs", "fsd");
    Book book3("dss","DSF","dsfs");
    Book book4("dsfsd","fsdfds","dsds");

    System system;
    system.addBook(book1);
    system.addBook(book2);
    system.addBook(book3);
    system.addBook(book4);
    system.BookLibrary(book1, user1);
    system.BookLibrary(book2, user2);
    system.BookLibrary(book3, user3);
    system.addUser(user1);
    system.addUser(user2);
    system.addUser(user3);
    system.BookLibrary(book3, user1);
    system.file();
}