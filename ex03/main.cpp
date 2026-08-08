#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon club = Weapon("crude spicked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		int	n = 4;
		Weapon *club = new Weapon[n];
		HumanA *jean = new HumanA("Jean", club[0]);
		club[0].setType("crude spicked club");
		std::cout << club[0].getType() << std::endl;
		jean->attack();
		delete jean;
		HumanA** wariss = new HumanA*[2];
		for (int i = 0; i < 2; i++)
			wariss[i] = new HumanA("wariss", club[i]);
		club[1].setType("some other type of club");
		club[2].setType("crude spicked club");
		wariss[0]->attack();
		wariss[1]->attack();
		for (int i = 0; i < 2; i++)
			delete wariss[i];
		delete[] wariss;
		delete[] club;
	}
	return (0);
}
