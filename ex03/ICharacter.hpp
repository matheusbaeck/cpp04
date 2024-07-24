#ifndef ICHARACTER_HPP__
# define ICHARACTER_HPP__

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter {
	private:
		void *_slot[4];
    public:
		ICharacter( void );
		ICharacter( AMateria *[4] );
		ICharacter( ICharacter const & );
		virtual ~ICharacter();

		AMateria *getEquiped( int ) const;
		virtual std::string const &getName( void ) const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;

		ICharacter &operator=( ICharacter const & );


};

# endif
