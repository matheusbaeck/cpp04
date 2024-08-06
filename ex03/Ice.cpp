#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( Ice const &other ) : AMateria(other.getType()) {}

Ice::~Ice( void ) {}

Ice *Ice::clone( void ) const
{
	Ice *ice = new Ice(*this);
	if (!ice)
		throw std::bad_alloc();
	return (ice);
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
