#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "Ahmet";
    hitPoint = 10;
    attackDamage = 0;
    energyPoint = 10;
    maxHP = 10;
    std::cout << "ClapTrap Worked" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
    this->name = name;
    hitPoint = 10;
    attackDamage = 0;
    energyPoint = 10;
    maxHP = 10;
    std::cout << "ClapTRap Worked" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
    hitPoint = claptrap.hitPoint;
    attackDamage = claptrap.attackDamage;
    energyPoint = claptrap.energyPoint;
    maxHP = claptrap.maxHP;
    std::cout << "Copy Constructer Worked" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " deleted." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoint > 0)
    {
        std::cout << this->name << " attacked to " << target << " causing " << attackDamage <<  " points of damage!" << std::endl;
        energyPoint--;
    }
    else
        std::cout << this->name << " 's energy is too ow to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > 0)
	{
		std::cout << "ClapTrap " + this->name + " takes " << amount << " points of damage";
		this->hitPoint -= amount;
		if (this->hitPoint <= 0)
			std::cout << " and died";
		std::cout << "!" << std::endl;
	}
	else
		std::cout << "ClapTrap " + this->name + " is" + " already dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint > 0)
	{
		if (this->hitPoint < maxHP)
		{
			std::cout << "ClapTrap " + this->name + " is repaired by " << amount << " points" << std::endl;
			this->hitPoint += amount;
			this->energyPoint--;
		}
		else
			std::cout << "ClapTrap " + this->name + " is already full health." << std::endl;
	}
	else
		std::cout << "ClapTrap " + this->name + "'s energy is too low to repair." << std::endl;
}

std::string ClapTrap::getName(void)
{
	return (this->name);
}

int ClapTrap::getAttackDamage(void)
{
	return (this->attackDamage);
}