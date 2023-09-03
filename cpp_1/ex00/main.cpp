#include "Zombie.hpp"

int main()
{
    Zombie *first;
    first = newZombie("ahmet");
    Zombie *second;
    second = newZombie("mehmet");
    randomChump(second->get_name());
    delete []second;
    delete []first;
}