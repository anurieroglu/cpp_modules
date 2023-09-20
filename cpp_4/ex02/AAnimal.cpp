#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
	cout << "AAnimal destructor called" << endl;
}

void AAnimal::makeSound() const
{
	cout << "Undefined AAnimal sound" << endl;
}

string AAnimal::getType() const
{
	return (this->type);
}