#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& oth);
        ~Dog();
        Dog &operator=(const Dog& oth);
        void makeSound() const;
};

#endif