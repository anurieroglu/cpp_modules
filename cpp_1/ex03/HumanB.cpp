#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::HumanB(){}
HumanB::~HumanB(){}

void    HumanB::setWeapon(Weapon &club)
{
    this->weapon = &club;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}