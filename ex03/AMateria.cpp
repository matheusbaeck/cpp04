#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("No-Type") {}

AMateria::AMateria( std::string const &type ) : _type(type) {}

AMateria::AMateria( AMateria const &other) : _type(other._type) {}

AMateria::~AMateria( void ) {}

std::string const &AMateria::getType() const { return ( this->_type ); }

void	AMateria::use(ICharacter& target) { (void) target; }

AMateria &AMateria::operator=( AMateria const &other)
{
	(void) other;
	return (*this);
}
