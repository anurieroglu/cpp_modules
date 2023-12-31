#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	ClapTrap
{
	protected:
		string	name;
		int		Hit;
		int		Energy;
		int		damage;
	public:
		ClapTrap();
		ClapTrap(const string nick);
		ClapTrap(const ClapTrap& oth);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap& oth);
		void	attack(const string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif