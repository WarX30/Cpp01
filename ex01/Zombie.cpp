#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie Created." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie()
{
	std::cout << "Zombie has been destroyed." << std::endl;
}

void Zombie::setName(std::string name)
{ 
	this->_name = name;
}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
