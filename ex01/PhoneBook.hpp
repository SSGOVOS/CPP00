#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"


class PhoneBook {
public:
    int index;
    static const int count = 8;
    Contact contacts[8];

    PhoneBook() : index(0) {}

    void add_contact();
    void search_contact();
};
#endif