#include "Character.hpp"

Character::Character( void ) : _name("empty")
{
	this->_slot = new AMateria *[4];
	for (int i = 0 ; i < 4 ; ++i) {
		this->_slot[i] = NULL;
	}
}

Character::Character( std::string name ) : _name(name)
{
	this->_slot = new AMateria *[4];
	for (int i = 0 ; i < 4 ; ++i) {
		this->_slot[i] = NULL;
	}
}

Character::Character( Character const &other )
{
	this->_name = other._name;
	this->_slot = new AMateria *[4];
	for (int i = 0 ; i < 4 ; ++i) {
		this->_slot[i] = other._slot[i]->clone();
	}
}

Character::~Character( void )
{
	// for (int i = 0 ; i < 4 ; ++i) {
	// 	this->_slot[i] = NULL;
	// }
	// if (this->_slot)
	// 	delete this->_slot[4];
}

std::string const &Character::getName( void ) const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int idx;

	try {
		if (!m)
			throw std::logic_error("cant equip (NULL) materia");
		idx = this->getIndex();
		this->_slot[idx] = m;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}	
}

void Character::unequip(int idx)
{
	if (!(idx >= 0 && idx < 4))
		throw std::logic_error("invalid index");
	else if (!this->_slot[idx])
		throw std::logic_error("slot already empty");
	else {
		this->_slot[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	try {
		if (!(idx >= 0 && idx < 4))
			throw std::logic_error("invalid index");
		else if (!this->_slot[idx])
			throw std::logic_error("empty slot");
		else {
			this->_slot[idx]->use(target);
		}
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}


Character &Character::operator=( Character const &other)
{
	if (this != &other) {
		this->_name = other._name;
		// if (this->_slot)
		// 	delete this->_slot[4];
		this->_slot = new AMateria *[4];
		for (int i = 0 ; i < 4 ; ++i)
			this->_slot[i] = other._slot[i]->clone();
	}
	return (*this);
}
