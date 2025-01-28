#include "PhoneBook.hpp"

void PhoneBook::add_contact()
{
    // Check if the phonebook is full
    if (current_contact_count < 8)
    {
        // Add new contact
        std::cout << "Enter first name: ";
        std::getline(std::cin , contacts[current_contact_count].first_name);
        std::cout << "Enter last name: ";
        std::getline(std::cin , contacts[current_contact_count].last_name);
        std::cout << "Enter nickname: ";
        std::getline(std::cin , contacts[current_contact_count].nickname);
        std::cout << "Enter phone number: ";
        std::getline(std::cin , contacts[current_contact_count].phone_number);
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin , contacts[current_contact_count].darkest_secret);

        current_contact_count++;
    }
    else
    {
        // Overwrite the first contact and shift others down
        std::cout << "Phone book is full. Overwriting the first contact." << std::endl;

        // Add new contact at the first index (which is now 1)
        std::cout << "Enter first name: ";
        std::getline(std::cin , contacts[0].first_name);
        std::cout << "Enter last name: ";
        std::getline(std::cin , contacts[0].last_name);
        std::cout << "Enter nickname: ";
        std::getline(std::cin , contacts[0].nickname);
        std::cout << "Enter phone number: ";
        std::getline(std::cin , contacts[0].phone_number);
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin , contacts[0].darkest_secret);
    }
}

void PhoneBook::search_contact()
{
    int i;
    std::string index;
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    
    for (i = 0; i < current_contact_count; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << contacts[i].first_name << "|";
        std::cout << std::setw(10) << contacts[i].last_name << "|";
        std::cout << std::setw(10) << contacts[i].nickname << std::endl;
    }
    std::cout << "Enter index: ";
    std::getline(std::cin , index);
    
    if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
    {
        i = index[0] - '1';
        if (i < current_contact_count)
        {
            std::cout << "First name: " << contacts[i].first_name << std::endl;
            std::cout << "Last name: " << contacts[i].last_name << std::endl;
            std::cout << "Nickname: " << contacts[i].nickname << std::endl;
            std::cout << "Phone number: " << contacts[i].phone_number << std::endl;
            std::cout << "Darkest secret: " << contacts[i].darkest_secret << std::endl;
        }
        else
        {
            std::cout << "Invalid index" << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid index" << std::endl;
    }
}
