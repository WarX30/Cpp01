#include "Zombie.hpp"

int	main(void)
{
	Zombie stackZombie("Alice");
	stackZombie.announce();

	Zombie *heapZombie = new Zombie("Passive");
	heapZombie->announce();
	delete heapZombie;

	Zombie *z = newZombie("Victor");
	z->announce();
	delete z;

	randomChump("Zomzom");
	return (0);
}
