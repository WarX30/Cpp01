#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	int	num;

	if (argc != 2)
		return 1;
	num = std::atoi(argv[1]);
	if (num > 0)
	{
		Zombie *horde = zombieHorde(num, "ZoawZoaw");
		delete [] horde;
	}
	else 
		return 1;
	return (0);
}
