#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( Cure const &other ) : AMateria() { *this = other; }

Cure::~Cure( void ) {}

Cure *Cure::clone( void ) const
{
	Cure *allocedCure = new Cure(*this);
	return (allocedCure);
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
