#include "Zombie.hpp"

void    Zombie::set_name(std::string othName)
{
    name = othName;
}

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *add;
    int     i;

    i = 0;
    add = new Zombie[N];
    while (i < N)
    {
        add[i].set_name(name);
        i++;
    }
    return (add);
}