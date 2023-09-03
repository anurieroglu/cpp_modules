#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();

        void    announce();
        void    set_name(std::string name);
        std::string    get_name();
};

Zombie *zombieHorde(int N, std::string name);

#endif
