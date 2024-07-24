#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : _idx(0)
{
	this->_src = new AMateria *[4];
	for (int i = 0 ; i < 4 ; i++) {
		this->_src[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const &other )
{
	this->_idx = other._idx;
	this->_src = new AMateria *[4];
	for (int i = 0 ; i < 4 ; ++i) {
		this->_src[i] = other._src[i]->clone();
	}
}
MateriaSource::~MateriaSource( void )
{
	// for (int i = 0 ; i < 4 ; ++i) {
	// 	this->_src[i] = NULL;
	// }
	// if (this->_src)
	// 	delete this->_src[4];
}


void		MateriaSource::learnMateria( AMateria *m )
{
	this->_src[this->_idx] = m;
	this->_idx = ++this->_idx % 4;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	try {
		for (size_t i = 0; i < 4; i++) {
			if (this->_src[this->_idx] && this->_src[this->_idx]->getType() == type)
				return (this->_src[this->_idx]->clone());
		}
		throw std::logic_error("you don't know this materia: " + type);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
	return(NULL);
}

MateriaSource &MateriaSource::operator=( MateriaSource const &other )
{
	if (this != &other) {
		this->_idx = other._idx;
		for (int i = 0 ; i < 4 ; ++i) {
			this->_src[i] = other._src[i]->clone();
		}
	}
	return (*this);
}