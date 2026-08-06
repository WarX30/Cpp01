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
		HumanA *jean = new HumanA("Jean", club[1]);
		club[1].getType();
		club[1].setType("crude spicked club");
		jean->attack();
	}
	return (0);
}
