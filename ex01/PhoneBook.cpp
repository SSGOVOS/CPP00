#include "PhoneBook.hpp"


bool isAlphanumeric(const std::string& str) 
{
    for (size_t i = 0; i < str.length(); ++i) 
    {
        char ch = str[i];
        if (!std::isalnum(ch)) 
            return false;
    }
    return true;
}

void PhoneBook::add_contact()
{
    if (this->index < this->count)
    	this->index++;
    int edge = this->index;
    if (edge == this->count)
    	edge--;
    for(int i = edge; i > 0 ; i--)
     	this->contacts[i] = this->contacts[i - 1];

    std::cout << "Enter first name: ";
    while (1) 
    {
    	if (!std::getline(std::cin, contacts[0].first_name))
            return;
        if (!contacts[0].first_name.empty() && isAlphanumeric(contacts[0].first_name)) 
        	break;
        std::cout << "First name cannot be empty or !alphanumeric. Please enter a valid first name: ";
    }
    std::cout << "Enter last name: ";
    while (1) 
    {
    	if (!std::getline(std::cin, contacts[0].last_name))
           return;
        if (!contacts[0].last_name.empty() && isAlphanumeric(contacts[0].last_name))
        	break;
        std::cout << "Last name cannot be empty or !alphanumeric. Please enter a valid last name: ";  
    }
    std::cout << "Enter nickname: ";
    while (1) 
    {
    	if (!std::getline(std::cin, contacts[0].nickname))
           return;
        if (!contacts[0].nickname.empty() && isAlphanumeric(contacts[0].nickname)) 
        	break;
        std::cout << "Nickname cannot be empty or !alphanumeric. Please enter a valid nickname: ";
    }

    std::cout << "Enter phone number: ";
    while (1) 
    {
    	if (!std::getline(std::cin, contacts[0].phone_number))
          return;
        if (!contacts[0].phone_number.empty() && isAlphanumeric(contacts[0].phone_number)) 
        	break;
        std::cout << "Phone number cannot be empty or !alphanumeric. Please enter a valid phone number: ";
    }

    std::cout << "Enter darkest secret: ";
    while (1) 
    {
    	if (!std::getline(std::cin, contacts[0].darkest_secret))
          return;
        if (!contacts[0].darkest_secret.empty() && isAlphanumeric(contacts[0].darkest_secret)) 
        	break;
        std::cout << "Darkest secret cannot be empty or !alphanumeric. Please enter a valid darkest secret: ";
    }
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::search_contact()
{
    int i;
    std::string index;
    
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (i = 0; i < this->index; i++) {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << (contacts[i].first_name.length() > 10 ? contacts[i].first_name.substr(0, 9) + "." : contacts[i].first_name) << "|";
        std::cout << std::setw(10) << (contacts[i].last_name.length() > 10 ? contacts[i].last_name.substr(0, 9) + "." : contacts[i].last_name) << "|";
        std::cout << std::setw(10) << (contacts[i].nickname.length() > 10 ? contacts[i].nickname.substr(0, 9) + "." : contacts[i].nickname) << std::endl;
    }
    
    std::cout << "Enter index: ";
    if (!std::getline(std::cin, index)) 
    {
        if (std::cin.eof()) 
            std::cout << "End of input (Ctrl-D) detected. Exiting..." << std::endl;
        else
            std::cout << "Input error occurred." << std::endl;
        return;
    }
    
    int lookup = std::atoi(index.data());
    lookup -= 1;
    if (lookup < 0 || lookup > this->index)
    {
    	std::cout << "Invalid index" << std::endl;
     	return;
    }
    std::cout << "lookup : " << lookup << std::endl;
    std::cout << "First name: " << contacts[lookup].first_name << std::endl;
    std::cout << "Last name: " << contacts[lookup].last_name << std::endl;
    std::cout << "Nickname: " << contacts[lookup].nickname << std::endl;
    std::cout << "Phone number: " << contacts[lookup].phone_number << std::endl;
    std::cout << "Darkest secret: " << contacts[lookup].darkest_secret << std::endl;
}
