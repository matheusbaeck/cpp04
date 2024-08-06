#include "Character.hpp"

Character::Character( void ) : _name("empty")
{
	this->_slot = new AMateria *[4];
	if (!this->_slot)
		throw std::bad_alloc();
	for (int i = 0 ; i < 4 ; ++i) {
		this->_slot[i] = NULL;
	}
}

Character::Character( std::string name ) : _name(name)
{
	this->_slot = new AMateria *[4];
	if (!this->_slot)
		throw std::bad_alloc();
	for (int i = 0 ; i < 4 ; ++i) {
		this->_slot[i] = NULL;
	}
}

Character::Character( Character const &other )
{
	this->_slot = new AMateria *[4];
	if (!this->_slot)
		throw std::bad_alloc();
	for (int i = 0 ; i < 4 ; ++i) {
		this->_slot[i] = NULL;
	}
	*this = other;
	// this->_name = other._name;
	// if (this->_slot)
	// {
	// 	for (int i = 0 ; i < 4 ; ++i)
	// 	{
	// 		if (this->_slot[i])
	// 		{
	// 			delete this->_slot[i];
	// 			this->_slot[i] = NULL;
	// 		}
	// 	}
	// }
	// else
	// {
	// 	this->_slot = new AMateria *[4];
	// 	if (!this->_slot)
	// 		throw std::bad_alloc();
	// }
	// for (int i = 0 ; i < 4 ; ++i)
	// {
	// 	if (other._slot[i])
	// 		this->_slot[i] = other._slot[i]->clone();
	// 	else
	// 		this->_slot[i] = NULL;
	// }
}

Character::~Character( void )
{
	if (this->_slot)
	{
		for (int i = 0 ; i < 4 ; ++i)
		{
			delete this->_slot[i];
			this->_slot[i] = NULL;
		}
		delete [] this->_slot;
	}
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
			throw std::logic_error("cant equip null materia");
		idx = this->getIndex();
		if (this->_slot[idx])
		{
			delete this->_slot[idx];
			this->_slot[idx] = NULL;
		}
		this->_slot[idx] = m;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
		delete m;
	}	
}

void Character::unequip(int idx)
{
	try {
		if (!(idx >= 0 && idx < 4))
			throw std::logic_error("invalid index");
		else if (!this->_slot[idx])
			throw std::logic_error("slot already empty");
		else {
			delete this->_slot[idx];
			this->_slot[idx] = NULL;
		}
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
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
	if (this != &other)
	{
		this->_name = other._name;
		if (this->_slot)
		{
			for (int i = 0 ; i < 4 ; ++i)
			{
				if (this->_slot[i])
				{
					delete this->_slot[i];
					this->_slot[i] = NULL;
				}
			}
		}
		else
		{
			this->_slot = new AMateria *[4];
			if (!this->_slot)
				throw std::bad_alloc();
		}
		for (int i = 0 ; i < 4 ; ++i)
		{
			if (other._slot[i])
				this->_slot[i] = other._slot[i]->clone();
			else
				this->_slot[i] = NULL;
		}
	}
	return (*this);
}

const AMateria &Character::getAMateria( int idx ) const
{
	if (idx < 0 || idx >= 4 || this->_slot[idx] == NULL)
		throw std::out_of_range("Index out of range");
	return (*this->_slot[idx]);
}

std::ostream &operator<<( std::ostream &os, Character &c)
{
	os << c.getName();
	os << "[";
	for (int i = 0; i < 4; ++i)
	{
		try {
			if (i != 0)
				os << ", ";
			os << c.getAMateria(i);
		} catch(const std::exception& e) {
			continue ;
		}
	}
	os << "]";
	return (os);
}
