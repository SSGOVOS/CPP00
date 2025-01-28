#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string command;
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
        if (std::cin.eof())
            std::exit(0);
        if(command.empty())
        {
            std::cin.clear();
            continue;
        }
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			std::exit(0);
		std::cin.clear();
	}
	return 0;
}