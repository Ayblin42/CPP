#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <string>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("default Shrubbery Formulaire", "default target",145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name,const std::string& target)
	: Form(name,target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
	: Form(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	this->Form::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(this->_signed == true)
	{
		if (this->_EchelonToExec < executor.getEchelon())
			throw Form::GradeTooLowException();
		else{
			std::string filename = (this->_target + "_shrubbery");
			std::cout <<BYELLOW<<filename <<GRN<<" created" <<NRM<< std::endl;
			std::ofstream ofs(filename.c_str());
			ofs<<GRN<<std::endl;
			ofs<<"                                              .         ;  "<<std::endl;
			ofs<<"                 .              .              ;%     ;;   "<<std::endl;
			ofs<<"                   ,           ,                :;%  %;   "<<std::endl;
			ofs<<"                    :         ;                   :;%;'     .,   "<<std::endl;
			ofs<<"           ,.        %;     %;            ;        %;'    ,;"<<std::endl;
			ofs<<"             ;       ;%;  %%;        ,     %;    ;%;    ,%'"<<std::endl;
			ofs<<"              %;       %;%;      ,  ;       %;  ;%;   ,%;' "<<std::endl;
			ofs<<"               ;%;      %;        ;%;        % ;%;  ,%;'"<<std::endl;
			ofs<<"                `%;.     ;%;     %;'         `;%%;.%;'"<<std::endl;
			ofs<<"                 `:;%.    ;%%. %@;        %; ;@%;%'"<<std::endl;
			ofs<<"                    `:%;.  :;bd%;          %;@%;'"<<std::endl;
			ofs<<"                      `@%:.  :;%.         ;@@%;'   "<<std::endl;
			ofs<<"                        `@%.  `;@%.      ;@@%;         "<<std::endl;
			ofs<<"                          `@%%. `@%%    ;@@%;        "<<std::endl;
			ofs<<"                            ;@%. :@%%  %@@%;       "<<std::endl;
			ofs<<"                              %@bd%%%bd%%:;     "<<std::endl;
			ofs<<"                                #@%%%%%:;;"<<std::endl;
			ofs<<"                                %@@%%%::;"<<std::endl;
			ofs<<"                                %@@@%(o);  . '         "<<std::endl;
			ofs<<"                                %@@@o%;:(.,'         "<<std::endl;
			ofs<<"                            `.. %@@@o%::;         "<<std::endl;
			ofs<<"                               `)@@@o%::;         "<<std::endl;
			ofs<<"                                %@@(o)::;        "<<std::endl;
			ofs<<"                               .%@@@@%::;         "<<std::endl;
			ofs<<"                               ;%@@@@%::;.          "<<std::endl;
			ofs<<"                              ;%@@@@%%:;;;. "<<std::endl;
			ofs<<"                          ...;%@@@@@%%:;;;;,.. "<<std::endl;
		}


	}
	else
		throw Form::NotSigned();

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
