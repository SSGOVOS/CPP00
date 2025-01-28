#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <cstdlib>
#include <limits>

class PhoneBook {
public:
    // Your contact structure and other member functions
    Contact contacts[8];
    int current_contact_count;

    PhoneBook() : current_contact_count(0) {}

    void add_contact();
    void search_contact();
};
#endif