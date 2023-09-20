#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(const WrongDog& oth);
		~WrongDog();
		void operator=(const WrongDog& oth);
		void makeSound() const;
};

#endif