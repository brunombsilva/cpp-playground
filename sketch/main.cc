#include <iostream>
#include <climits>
#include <vector>
#include "proto-library/addressbook.pb.h"

using namespace std;

int main()
{
    tutorial::AddressBook address_book;

    tutorial::Person* p1 = address_book.add_people();
    tutorial::Person* p2 = address_book.add_people();

    p1->set_name("Guy");
    p1->set_email("mail@mail.com");

    p2->set_name("Guy 2");

    cout << address_book.DebugString();
    return 0;
}
