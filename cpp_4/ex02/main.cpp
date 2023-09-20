#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	WrongCat *catObject = new WrongCat;
	WrongCat	*dogObject = new WrongCat;
	WrongCat	*duckObject = new WrongCat;

	WrongAnimal *animalobject[] = {catObject, dogObject, duckObject};

	for (int i = 0; i < 3; i++)
		animalobject[i]->makeSound();
}

