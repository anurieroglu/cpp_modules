#include "ClapTrap.hpp"

int	 main(void)
{
	ClapTrap a;
	ClapTrap b("Ahmet");
	ClapTrap c(b);

	a.attack("Zombie");
	b.takeDamage(2);
	c.beRepaired(10);
	a = b;

}