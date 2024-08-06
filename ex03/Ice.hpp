#ifndef ICE_HPP__
# define ICE_HPP__

# include <iostream>
# include <stdexcept>
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice( void );
		Ice( Ice const & );
        virtual ~Ice();

		virtual Ice* clone( void ) const;
		virtual void use( ICharacter & );

		Ice &operator=( Ice const & );
};

#endif
