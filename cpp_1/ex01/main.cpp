#include "Zombie.hpp"

int main()
{
    Zombie *first;
    first = zombieHorde(6, "ahmet");
    int i = 0;
    while (i < 6)
    {
        first[i].announce();&
        i++;
    }
    delete []first;
}