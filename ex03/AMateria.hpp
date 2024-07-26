#ifndef AMATERIA_HPP__
# define AMATERIA_HPP__

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria( void );
		AMateria( std::string const &);
		AMateria( AMateria const & );
		~AMateria( void );
		
		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter & );

		AMateria &operator=( AMateria const & );
};

std::ostream &operator<<( std::ostream &, AMateria const & );

# endif
