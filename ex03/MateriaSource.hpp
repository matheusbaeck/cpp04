#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource;

class MateriaSource : public IMateriaSource {
    private:
        AMateria **_src;
        int      _idx;
    public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & );
		virtual ~MateriaSource();

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);

        virtual void list( void )
        {
            std::cout << "Learned Materias:" << std::endl;
            for (int i = 0; i < 4; i++)
            {
                if (_src[i])
                    std::cout << "\t" << _src[i]->getType() << std::endl;
                else
                    std::cout << "\t" << "NULL" << std::endl;

            }
        }

		MateriaSource &operator=( MateriaSource const & );
};

# endif