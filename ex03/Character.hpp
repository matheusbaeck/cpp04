#ifndef Character_HPP__
# define Character_HPP__

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria    **_slot;

		int getIndex( void )
		{
			for (int i = 0; i < 4; i++) {
				if (!this->_slot[i])
					return (i);
			}
			throw std::logic_error("slots are full");
		}
	public:
		Character( void );
		Character( std::string name );
		Character( Character const & );
		virtual ~Character();

		virtual std::string const &getName( void ) const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);

		const AMateria &getAMateria( int ) const;

		Character &operator=( Character const & );
};

std::ostream &operator<<( std::ostream &os, Character &c);

# endif
