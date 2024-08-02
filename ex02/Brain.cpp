/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/06/17 12:58:25 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
# include <stdexcept>

Brain::Brain( void )
{
	this->_ideas = new std::string[100];	
	std::cout << "std contructor Brain" << std::endl;
}

Brain::Brain( Brain const &other )
{
	this->_ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "cpy contructor Brain" << std::endl;
}

Brain	&Brain::operator=( Brain const &obj )
{
	if (this != &obj)
	{
		delete [] this->_ideas;
		this->_ideas = new std::string[100];
		for (size_t i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

Brain::~Brain( void )
{
	delete [] this->_ideas;
	std::cout << "destructor Brain" << std:: endl;
}

const std::string	&Brain::getIdea( int index ) const
{
	if (index < 0 || index >= 100)
		throw std::out_of_range("Index out of range");
	return this->_ideas[index];
}

void Brain::setIdea( std::string newIdea )
{
	for (size_t i = 0; i < 100; ++i)
	{
		if (this->_ideas[i].empty())
		{
			this->_ideas[i] = newIdea;
			return;
		}
	}
}
