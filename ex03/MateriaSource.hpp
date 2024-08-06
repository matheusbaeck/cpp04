#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria **_src;
		int      _idx;
	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & );
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

		const AMateria &getAMateria( int ) const;

		MateriaSource &operator=( MateriaSource const & );
};

std::ostream &operator<<( std::ostream &os, MateriaSource const & );

# endif