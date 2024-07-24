#include "ICharacter.hpp"

ICharacter::ICharacter( void )
{
	for (int i = 0 ; i < 4 ; ++i) {
		this->_slot[i] = NULL;
	}
}

ICharacter::ICharacter( AMateria *slot[4] )
{
	for (int i = 0 ; i < 4 ; ++i) {
		(this->_slot[i]) = ((AMateria *)slot[i]);
	}

}

ICharacter::ICharacter( ICharacter const &other ) { *this-> = other; }

ICharacter::~ICharacter( void ) {}

AMateria *ICharacter::getEquiped( int idx ) const
{
	if (!(idx >= 0 && idx <= 4 && this->_slot[idx]))
		throw std::logic_error("invalid index");
	return (((AMateria *)this->_slot[idx]));
}

ICharacter &ICharacter::operator=( ICharacter const &other)
{
	if (this != &other) {
		for (int i = 0 ; i < 4 ; ++i)
			*this->_slot[i] = other.getEquiped(i);
	}
}
