#include "Zombie.hpp"

void    Zombie::set_name(std::string othName)
{
    name = othName; 
}

std::string Zombie::get_name()
{
    return (name);
}

Zombie* newZombie(std::string name)
{
    Zombie *add;
    
    add = new Zombie[1];
    add->set_name(name);
    return (add);
}