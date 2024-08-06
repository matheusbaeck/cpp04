#include "MateriaSource.hpp"
#include <stdexcept>

MateriaSource::MateriaSource( void ) : _idx(0)
{
	this->_src = new AMateria *[4];
	if (!this->_src)
		throw std::bad_alloc();
	for (int i = 0 ; i < 4 ; i++) {
		this->_src[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const &other )
{
	this->_idx = other._idx;
	this->_src = new AMateria *[4];
	if (!this->_src)
		throw std::bad_alloc();
	for (int i = 0 ; i < 4 ; ++i)
	{
		if (other._src[i])
			this->_src[i] = other._src[i]->clone();
		else
			this->_src[i] = NULL;
	}
}
MateriaSource::~MateriaSource( void )
{
	if (this->_src)
	{
		for (int i = 0 ; i < 4 ; ++i)
		{
			if (this->_src[i])
			{
				delete this->_src[i];
				this->_src[i] = NULL;
			}
		}
		delete [] this->_src;
	}
}


void		MateriaSource::learnMateria( AMateria *m )
{
	if (!m)
	{
		std::cerr << "cannot add null Materia to MateriaSource" << std::endl;
		return ;
	}
	if (this->_src[this->_idx])
		delete this->_src[this->_idx];
	this->_src[this->_idx] = m;
	this->_idx = (this->_idx + 1) % 4;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	try {
		for (size_t i = 0; i < 4; i++) {
			if (this->_src[i] && this->_src[i]->getType() == type)
				return (this->_src[i]->clone());
		}
		throw std::logic_error("you don't know this materia: " + type);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return(NULL);
}

MateriaSource &MateriaSource::operator=( MateriaSource const &other )
{
	if (this != &other) {
		this->_idx = other._idx;
		for (int i = 0 ; i < 4 ; ++i) {
			if (this->_src[i])
				delete this->_src[i];
			if (other._src[i])
				this->_src[i] = other._src[i]->clone();
			else
				this->_src[i] = NULL;
		}
	}
	return (*this);
}

const AMateria &MateriaSource::getAMateria( int idx ) const
{
	if (idx < 0 || idx >= 4 || this->_src[idx] == NULL)
		throw std::out_of_range("Index out of range");
	return (*this->_src[idx]);
}

std::ostream &operator<<( std::ostream &os, MateriaSource const &m )
{
	os << "[";
	for (int i = 0; i < 4; ++i)
	{
		try {
			if (i != 0)
				os << ", ";
			os << m.getAMateria(i);
		} catch(const std::exception& e) {
			continue ;
		}
	}
	os << "]";
	return (os);
}
