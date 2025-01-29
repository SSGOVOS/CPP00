#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <cstdlib>
#include <limits>
#include <signal.h>

class PhoneBook {
public:
    // Your contact structure and other member functions
    int index;
    static const int count = 8;
    Contact contacts[8];

    PhoneBook() : index(0) {}

    void add_contact();
    void search_contact();
};
#endif