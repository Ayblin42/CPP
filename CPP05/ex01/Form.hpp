/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:28:00 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/25 03:40:45 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class Bureaucrat;

# define NRM  "\x1B[0m"
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT  "\x1B[37m"

class Form
{

	public:

		Form();
		Form(const std::string& name, const unsigned int _EchelonToSign, const unsigned int _EchelonToExec);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		// ? Accessor //

		std::string getname() const;
		bool getsigned() const;
		unsigned int getEchelonToSign() const;
		unsigned int getEchelonToExec() const;

		//? Fonction membre //
		void beSigned(const Bureaucrat& candidate);

		// ? EXEPTIONS //

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
		class	AlreadySigned: public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Formulaire Already Signed");
			}
		};

	private:

		const	std::string	_name;
		bool				_signed;
		const unsigned int	_EchelonToSign;
		const unsigned int	_EchelonToExec;
};


std::ostream &	operator<<( std::ostream & o, Form const & rhs );

#endif /* ************************************************************ FORM_H */
