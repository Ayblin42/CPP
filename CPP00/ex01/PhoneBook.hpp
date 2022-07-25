/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 07:36:27 by ayblin            #+#    #+#             */
/*   Updated: 2022/07/25 15:56:54 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>

class Contact
{
public:

	Contact();
	~Contact();

	// Getters
	// std::string getFirstName() const;
	// std::string getLastName() const;
	// std::string getNickName() const;
	// std::string	getPhoneNumber() const;
	// std::string getSecret() const;

	// //Setters
	// void setFirstName(std::string name);
	// void setLastName(std::string name);
	// void setNickName(std::string name);
	// void setPhoneNumber(std::string number);
	// void setSecret(std::string secret);

private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string	_phoneNumber;
	std::string	_secret;
};

class Phonebook
{
public:

	// Constructors & Destructor
	Phonebook();
	~Phonebook();

	// Getters
	// Contact getContact(int index) const;
	// int		getCount() const;

	// // Setters
	// void setContact(Contact contact);

private:

	static int		_count;

	Contact _contacts[8];
	// int		_index;
};


#endif
