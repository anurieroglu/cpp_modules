#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    cout << "Cat is created" << endl;
}

Cat::Cat(const Cat& oth) : Animal(oth)
{
    *this = oth;
    cout << "Cat copy constructor called" << endl;
}

Cat::~Cat()
{
    cout << "Cat Destroyed" << endl;
}

Cat &Cat::operator=(const Cat& oth)
{
    type = oth.type;
    cout << "Cat copy assigment operator called" << endl;
    return (*this);
}

void Cat::makeSound() const
{
    cout << "MeoW" << endl;
}
