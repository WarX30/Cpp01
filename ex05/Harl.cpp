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
			  << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
			  << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*function)(void);

	if (level == "DEBUG")
		function = &Harl::_debug;
	else if (level == "INFO")
		function = &Harl::_info;
	else if (level == "WARNING")
		function = &Harl::_warning;
	else if (level == "ERROR")
		function = &Harl::_error;
	else
		return ;
	(this->*function)();
}
