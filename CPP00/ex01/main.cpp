#include "PhoneBook.hpp"

bool isNumber(const std::string str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

void addContact(Phonebook *phonebook)
{
	Contact 	contact;
	std::string str;

	std::cout <<GRN << "First name: "<<YEL;
	std::getline(std::cin, str);
	contact.setFirstName(str);
	std::cout <<GRN<< "Last name: "<<YEL;
	std::getline(std::cin, str);
	contact.setLastName(str);
	std::cout <<GRN<< "Nickname: "<<YEL;
	std::getline(std::cin, str);
	contact.setNickName(str);
	while(1)
	{
	std::cout <<GRN<< "Phone number: "<<YEL;
	std::getline(std::cin, str);
		if (str.length() == 10 && isNumber(str))
		{
			contact.setPhoneNumber(str);
			break ;
		}
	}
	std::cout <<GRN<< "Darkest secret: "<<YEL;
	std::getline(std::cin, str);
	contact.setSecret(str);
	phonebook->setContact(contact);
}

std::string decoupage(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void searchContact(Phonebook *phonebook)
{
	int i;
	int count;

	count = phonebook->getCount();
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i=0; i < phonebook->getCount(); i++)
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << decoupage(contact.getFirstName());
		std::cout << "|" << std::setw(10) << decoupage(contact.getLastName());
		std::cout << "|" << std::setw(10) << decoupage(contact.getNickName()) << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;

	if (count > 0)
	{
		std::string str;
		std::cout <<GRN<< "Please enter an index for relevant information: "<<YEL;
		while (1)
		{
			std::cin >> i;
			if(i > 0 && i <= count)
				break ;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout <<GRN<< "Invalid input. Please enter an index between 1 and " << count << ": "<<YEL;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		i--;
		Contact tmp;
		tmp = phonebook->getContact(i);
		std::cout <<GRN<< std::endl;
		std::cout <<GRN<< "First name - " <<YEL<< tmp.getFirstName() << std::endl;
		std::cout <<GRN<< "Last name - " <<YEL<< tmp.getLastName() << std::endl;
		std::cout <<GRN<< "Nickname - " <<YEL<< tmp.getNickName() << std::endl;
		std::cout <<GRN<< "Phone number - " <<YEL<< tmp.getPhoneNumber() << std::endl;
		std::cout <<GRN<< "Darkest secret - " <<YEL<< tmp.getSecret() << std::endl;
	}
	else
	{
		std::cout << "Table is empty!" << std::endl;
	}
}

int main()
{
	Phonebook phonebook;

	system("Color 1A");
	std::cout << GRN<< "Command info: " << std::endl;
	std::cout << " -ADD: add a contact to the phonebook" << std::endl;
	std::cout << " -SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " -EXIT: quit the program" << std::endl;

	while (1)
	{
		std::string command;
		std::cout <<GRN<< std::endl << "Enter a command: "<<YEL;
		std::getline(std::cin, command);
		std::cout << GRN;
		if (command == "ADD")
			addContact(&phonebook);
		if (command == "EXIT")
			break ;
		if (command == "SEARCH")
			searchContact(&phonebook);
	}
}
