#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
	cout << "AAnimal Destroyed" << endl;
}

void AAnimal::makeSound() const
{
	cout << "Undefined AAnimal sound" << endl;
}

string AAnimal::getType() const
{
	return (this->type);
}