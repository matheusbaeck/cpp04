/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/07/26 20:36:35 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "cpy contructor Dog" << std::endl;
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
