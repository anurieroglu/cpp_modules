#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout  << name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " Died" << std::endl;
}

Zombie::Zombie(){}