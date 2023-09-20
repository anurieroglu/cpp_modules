#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    cout << "Dog is created" << endl;
    beg = new Brain();
}

Dog::Dog(const Dog& oth) : AAnimal(oth)
{
    *this = oth;
    cout << "Dog copy constructor is called" << endl;
}

Dog::~Dog()
{
    cout << "Dog Destroyed" << endl;
}

Dog &Dog::operator=(const Dog& oth)
{
    type = oth.type;
    cout << "Dog copy assigment operator called" << endl;
    return (*this);
}

void Dog::makeSound() const
{
    cout << "Bark" << endl;
}