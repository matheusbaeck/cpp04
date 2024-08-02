/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/08/02 10:52:10 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "std contructor Dog" << std::endl;
}

Dog::Dog( Dog const &other) : Animal()
{
	*this = other;
	std::cout << "cpy contructor Dog" << std::endl;

}

Dog::~Dog( void )
{
	std::cout << "destructor Dog" << std:: endl;
}

Dog	&Dog::operator=( Dog const &other )
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof!!!" << std:: endl;
}
