#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    cout << "Dog is created" << endl;
    beg = new Brain();
}

Dog::Dog(const Dog& oth) : Animal(oth)
{
    *this = oth;
    cout << "Dog copy constructor is called" << endl;
}

Dog::~Dog()
{
    cout << "Dog Destroyed" << endl;
    delete beg;
}

void Dog::operator=(const Dog& oth)
{
    type = oth.type;
    cout << "Dog copy assigment operator called" << endl;
}

void Dog::makeSound() const
{
    cout << "Bark" << endl;
}