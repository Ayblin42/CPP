#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Intern
{

	public:

		Intern();
		~Intern();

		Form *makeForm(std::string const & formulaire, std::string const &  target) const;

	class InvalideFormException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Formulaire invalid");
			}
		};
};

#endif /* ********************************************************** INTERN_H */
