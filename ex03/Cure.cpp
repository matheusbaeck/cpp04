#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( Cure const &other ) : AMateria(other.getType()) {}

Cure::~Cure( void ) {}

Cure *Cure::clone( void ) const
{
	Cure *cure = new Cure(*this);
	if (!cure)
		throw std::bad_alloc();
	return (cure);
}

void Cure::use( ICharacter &creature )
{
	std::cout << "* heals " << creature.getName() << "'s wounds *" << std::endl;
}

Cure &Cure::operator=( Cure const &other )
{
	if (this != &other) {
		this->_type = other.getType();
	}
	return (*this);
}
