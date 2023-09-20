#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class AAnimal
{
	protected:
		string type;
	public:
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		string getType() const;
};

#endif