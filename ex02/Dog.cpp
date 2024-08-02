/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/08/02 13:31:47 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "std contructor Dog" << std::endl;
	this->_brain = new Brain();
	this->_brain->setIdea( "I am a " + this->_type);
}

Dog::Dog( Dog const &other) : Animal()
{
	this->_type = other._type;
	this->_brain = new Brain(other.getBrain());
	std::cout << "cpy contructor Dog" << std::endl;

}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "destructor Dog" << std:: endl;
}

Dog	&Dog::operator=( Dog const &other )
{
	if (this != &other)
	{
		this->_type = other._type;
		*(this->_brain) = other.getBrain();
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof!!!" << std:: endl;
}

Brain const	&Dog::getBrain() const
{
	return (*this->_brain);
}

void	Dog::eureka(std::string idea)
{
	this->_brain->setIdea(idea);
}

void	Dog::tellIdeas( void )
{
	for (int i = 0 ; i < 100 ; ++i)
	{
		if (!this->_brain->getIdea(i).empty())
			std::cout << "Idea " << i << ": " << this->_brain->getIdea(i) << std::endl;
	}
}
