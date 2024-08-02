/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/08/02 10:51:55 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "std contructor Cat" << std::endl;
}

Cat::Cat( Cat const &other) : Animal()
{
	*this = other;
	std::cout << "cpy contructor Cat" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "destructor Cat" << std:: endl;
}

Cat	&Cat::operator=( Cat const &other )
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miau!!!" << std:: endl;
}
