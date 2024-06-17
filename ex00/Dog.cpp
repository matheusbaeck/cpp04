/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/06/17 12:59:37 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "cpy contructor Dog" << std::endl;
}

Dog::Dog( std::string type)
{
	this->_type = type;
	std::cout << "constructor Dog "<< type << std::endl;
}

Dog	&Dog::operator=( Dog const &obj )
{
	this->_type = obj._type;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "destructor Dog" << std:: endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof!!!" << std:: endl;
}
