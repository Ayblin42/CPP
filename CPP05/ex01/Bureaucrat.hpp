/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:36:55 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/24 04:26:27 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string const name, unsigned int echelon);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		// getters
		std::string const getname() const;
		unsigned int getEchelon() const;

		void promotion();
		void retrogradation();
		void signForm(Form& form) const;

		class GradeTooHighException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Too high Echelon");
			}
		};

		class GradeTooLowException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Too low Echelon");
			}
		};

	private:
		int			_echelon;
		std::string _name;
};

std::ostream &	operator<<(std::ostream   &o, Bureaucrat const   &rhs);

#endif /* ****************************************************** BUREAUCRAT_H */
