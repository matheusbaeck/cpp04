#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( Ice const &other ) : AMateria() { *this = other; }

Ice::~Ice( void ) {}

Ice *Ice::clone( void ) const
{
	Ice *allocedIce = new Ice(*this);
	return (allocedIce);
}

void Ice::use( ICharacter &creature )
{
	std::cout << "* shoots an ice bolt at " << creature.getName() << "*" << std::endl;
}

Ice &Ice::operator=( Ice const &other )
{
	if (this != &other) {
		this->_type = other.getType();
	}
	return (*this);
}
