#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation form", target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f) : Form(f.name , f.target, f.gradeSign, f.gradeEx)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
	target = f.target;
	sig = f.sig;
	return *this;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream fout;
	std::string filename;
	
	try
	{
		Form::execute(executor);
	}
	catch(const std::exception& e)
	{
		throw;
	}
	filename = getTarget() + "_shrubbery";
	fout.open(filename.c_str(),  std::ios::out | std::ios::trunc);

	fout << 
"                                                         .\n"
"                                              .         ;  \n"
"                 .              .              ;%     ;;   \n"
"                   ,           ,                :;%  %;   \n"
"                    :         ;                   :;%;'     .,   \n"
"           ,.        %;     %;            ;        %;'    ,;\n"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
"                `%;.     ;%;     %;'         `;%%;.%;'\n"
"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
"                    `:%;.  :;bd%;          %;@%;'\n"
"                      `@%:.  :;%.         ;@@%;'   \n"
"                        `@%.  `;@%.      ;@@%;         \n"
"                          `@%%. `@%%    ;@@%;        \n"
"                            ;@%. :@%%  %@@%;       \n"
"                              %@bd%%%bd%%:;     \n"
"                                #@%%%%%:;;\n"
"                                %@@%%%::;\n"
"                                %@@@%(o);  . '         \n"
"                                %@@@o%;:(.,'         \n"
"                            `.. %@@@o%::;         \n"
"                               `)@@@o%::;         \n"
"                                %@@(o)::;        \n"
"                               .%@@@@%::;         \n"
"                               ;%@@@@%::;.          \n"
"                              ;%@@@@%%:;;;. \n"
"                          ...;%@@@@@%%:;;;;,..    Gilo97\n";

fout.close();

}