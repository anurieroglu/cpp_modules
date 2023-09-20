#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    cout << "Cat is created" << endl;
    beg = new Brain();
}

Cat::Cat(const Cat& oth) : Animal(oth)
{
    *this = oth;
    cout << "Cat copy constructor called" << endl;
}

Cat::~Cat()
{
    cout << "Cat Destroyed" << endl;
    delete beg;
}

void Cat::operator=(const Cat& oth)
{
    type = oth.type;
    cout << "Cat copy assigment operator called" << endl;
}

void Cat::makeSound() const
{
    cout << "MeoW" << endl;
}
