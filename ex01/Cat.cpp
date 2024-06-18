/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/06/18 18:54:56 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "cpy contructor Cat" << std::endl;
	this->newBrain();
}

Cat::Cat( std::string type)
{
	this->_type = type;
	std::cout << "constructor Cat "<< type << std::endl;
}

Cat	&Cat::operator=( Cat const &obj )
{
	std::cout << "assignation Cat "<< std::endl;
	this->_type = obj._type;
	return (*this);
}

Cat::~Cat( void )
{
	this->deleteBrain();
	std::cout << "destructor Cat" << std:: endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miau!!!" << std:: endl;
}

