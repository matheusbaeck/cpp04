#ifndef CURE_HPP__
# define CURE_HPP__

# include <iostream>
# include <stdexcept>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure( void );
		Cure( Cure const & );
        virtual ~Cure();

		virtual Cure* clone( void ) const;
		virtual void use( ICharacter & );

		Cure &operator=( Cure const & );
};

#endif
