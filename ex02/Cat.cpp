/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/07/26 20:35:55 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "cpy contructor Cat" << std::endl;
}

Cat	&Cat::operator=( Cat const &obj )
{
	this->_type = obj._type;
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "destructor Cat" << std:: endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miau!!!" << std:: endl;
}
