#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("No-Type") {}

AMateria::AMateria( std::string const &type ) : _type(type) {}

AMateria::AMateria( AMateria const &other) { *this = other; }

AMateria::~AMateria( void ) {}

std::string const &AMateria::getType() const { return ( this->_type ); }

AMateria &AMateria::operator=( AMateria const &other)
{
	if (this != &other) {
		this->_type = other.getType();
	}
	return (*this);
}
