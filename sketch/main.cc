#include <iostream>
#include <climits>
#include <vector>
#include "addressbook/addressbook.pb.h"

using namespace std;
using namespace playground::addressbook;

int main()
{
    AddressBook addressbook;

    Person* p1 = addressbook.add_people();
    Person* p2 = addressbook.add_people();

    p1->set_name("Guy");
    p1->set_email("mail@mail.com");

    p2->set_name("Guy 2");

    cout << addressbook.DebugString();
    return 0;
}
