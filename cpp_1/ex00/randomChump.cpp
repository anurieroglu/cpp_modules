#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie  *person;
    person = newZombie(name);
    person->announce();

    delete []person;
}