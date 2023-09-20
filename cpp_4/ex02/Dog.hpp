#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *beg;
    public:
        Dog();
        Dog(const Dog& oth);
        ~Dog();
        Dog &operator=(const Dog& oth);
        void makeSound() const;
};

#endif