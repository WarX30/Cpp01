#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl has been created." << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl has been destroyed." << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
			  << std::endl
			  << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << std::endl
			  << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
			  << std::endl
			  << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl
			  << std::endl;
}

static void	printMsg(const std::string& msg)
{
	std::cout << "[ "
			  << msg
			  << " ]"
			  << std::endl;
}

void	Harl::complain(std::string str)
{
	int		level;

	if (str == "DEBUG")
		level = 0;
	else if (str == "INFO")
		level = 1;
	else if (str == "WARNING")
		level = 2;
	else if (str == "ERROR")
		level = 3;
	else
		level = -1;

	switch (level)
	{
		case 0:
			printMsg("DEBUG");
			_debug();
			/* fall through */
		case 1:
			printMsg("INFO");
			_info();
			/* fall through */
		case 2:
			printMsg("WARNING");
			_warning();
			/* fall through */
		case 3:
			printMsg("ERROR");
			_error();
			/* fall through */
			break;
		default:
			printMsg("Probably complaining about insignificant problems");
	}
}
