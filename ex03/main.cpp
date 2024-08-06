#include <iostream>

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{

	ICharacter		*me = new Character("me");
	ICharacter		*bob = new Character("bob");

	IMateriaSource	*src = new MateriaSource();

	std::cout << std::endl << "Creating and filling a MateriaSource" << std::endl;
	std::cout << "\tlearning <NULL> materia" << std::endl << "\t";
	src->learnMateria((AMateria *) NULL);
	for (int i = 0 ; i < 4 ; ++i) {
		std::cout << "\tlearning new Ice materia: ";
		src->learnMateria(new Ice());
		std::cout << "src: "<< *((MateriaSource *)src) << std::endl;
	}
	for (int i = 0 ; i < 2 ; ++i) {
		std::cout << "\tlearning new Cure materia: ";
		src->learnMateria(new Cure());
		std::cout << "src: "<< *((MateriaSource *)src) << std::endl;
	}
	
	IMateriaSource	*tmp_src = new MateriaSource();
	std::cout << std::endl << "Testing MateriaSource copy constructor and assignation (deep copy)" << std::endl;
	std::cout << "\tassigning src to tmp_src" << std::endl;
	*((MateriaSource *)tmp_src) = *((MateriaSource *)src);
	std::cout << "\tdeleting src, must not erase Materia in tmp_src" << std::endl;
	delete src;
	
	std::cout << "\ttmp_src "<< *((MateriaSource *)tmp_src) << std::endl;
	std::cout << "\tcreating src again by copy constructor" << std::endl;
	src = new MateriaSource(*((MateriaSource *)tmp_src));
	std::cout << "\tdeleting tmp_src, must not erase Materia in src" << std::endl;
	delete tmp_src;
	std::cout << "\tsrc "<< *((MateriaSource *)src) << std::endl;

	std::cout << std::endl << "Equip and unequip a Character" << std::endl;
	std::cout << "\tequip <NULL> materia" << std::endl << "\t";
	me->equip((AMateria *) NULL);
	for (int i = 0; i < 4; ++i)
	{
		std::cout << "\tequip: ";
		me->equip(new Ice());
		std::cout << *((Character *)me) << std::endl;
	}
	std::cout << "\tequip: ";
	me->equip(new Ice());
	for (int i = 0; i < 4; ++i)
	{
		std::cout << "\tunequip: ";
		me->unequip(i);
		std::cout << *((Character *)me) << std::endl;
	}
	std::cout << "\tunequip: ";
	me->unequip(5);
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	std::cout << "\tequip: " << *((Character *)me) << "(with createMateria)" << std::endl;


	ICharacter		*tmp_char = new Character("tmp");
	std::cout << std::endl << "Testing Character copy constructor and assignation (deep copy)" << std::endl;
	std::cout << "\tassigning me to temp_char" << std::endl;
	*((Character *)tmp_char) = *((Character *)me);
	std::cout << "\tdeleting me, must not erase equiped Materia in tmp_char" << std::endl;
	delete me;
	std::cout << "\t"<< *((Character *)tmp_char) << std::endl;

	std::cout << "\tcreating me again by copy constructor" << std::endl;
	me = new Character(*((Character *)tmp_char));
	delete tmp_char;
	std::cout << "\tdeleting tmp_src, must not erase equiped Materia in me" << std::endl;
	std::cout << "\t"<< *((Character *)me) << std::endl;

	std::cout << std::endl << "Testing Usage" << std::endl;
	std::cout << "\t" << *((Character *)me) << std::endl;
	std::cout << "\t";
	me->use(0, *bob);
	std::cout << "\t";
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}
