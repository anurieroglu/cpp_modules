#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *beg;
    public:
        Cat();
        Cat(const Cat& oth);
        ~Cat();
        Cat &operator=(const Cat& oth);
        void makeSound() const;
};

#endif