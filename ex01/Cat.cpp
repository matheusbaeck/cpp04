/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/08/02 18:12:02 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "std contructor Cat" << std::endl;
	this->_brain = new Brain();
	this->_brain->setIdea( "I am a " + this->_type);
}

Cat::Cat( Cat const &other) : Animal()
{
	this->_type = other._type;
	this->_brain = new Brain(other.getBrain());
	std::cout << "cpy contructor Cat" << std::endl;
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "destructor Cat" << std:: endl;
}

Cat	&Cat::operator=( Cat const &other )
{
	if (this != &other)
	{
		this->_type = other.getType();
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(other.getBrain());
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miau!!!" << std:: endl;
}

Brain const	&Cat::getBrain() const
{
	return (*this->_brain);
}

void	Cat::eureka(std::string idea)
{
	this->_brain->setIdea(idea);
}

void	Cat::tellIdeas( void )
{
	for (int i = 0 ; i < 100 ; ++i)
	{
		if (!this->_brain->getIdea(i).empty())
			std::cout << "Idea " << i << ": " << this->_brain->getIdea(i) << std::endl;
	}
}
