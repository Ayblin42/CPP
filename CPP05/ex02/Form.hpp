/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:28:00 by ayblin            #+#    #+#             */
/*   Updated: 2022/08/25 06:23:15 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class Bureaucrat;

# define NRM  "\x1B[0m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT  "\x1B[37m"

# define WHITE "\033[0m"
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"

# define BWHITE "\033[1m"
# define BGRAY "\033[1;29m"
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"

class Form
{

	public:

		Form();
		Form(const std::string& name, const unsigned int EchelonToSign, const unsigned int EchelonToExec);
		Form(const std::string& name,const std::string& target, const unsigned int EchelonToSign, const unsigned int EchelonToExec);
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
		virtual void execute(Bureaucrat const & executor) const = 0;

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
		class	NotSigned: public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Formulaire n'est pas Signed");
			}
		};
	protected:

		const	std::string	_name;
		const	std::string	_target;
		bool				_signed;
		const unsigned int	_EchelonToSign;
		const unsigned int	_EchelonToExec;
};


std::ostream &	operator<<( std::ostream & o, Form const & rhs );

#endif /* ************************************************************ FORM_H */
