#include "Movie.h"
#include "System.h"
#include "User.h"
#include <iostream>

int main()
{
    User user1("user1", "info");
    User user2("user2", "info");
    Movie movie("sgdsgd", "fsfsd","fsdsd");
    movie.registorShowTime("fsfds");
    System system("dsfsd");
    system.add_movie("gsvfsd","fdsg","gfs");
    system.add_user("fsfds","sdvfsd");
    system.file();
}
