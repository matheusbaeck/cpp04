/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:49:13 by math              #+#    #+#             */
/*   Updated: 2024/08/02 10:49:26 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "std contructor Animal" << std::endl;
}

Animal::Animal( Animal const &obj )
{
	std::cout << "cpy contructor Animal" << std::endl;
	*this = obj;
}

Animal::~Animal( void )
{
	std::cout << "destructor Animal" << std:: endl;
}

Animal	&Animal::operator=( Animal const &other )
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "HEEEY!!!" << std:: endl;
}

std::ostream	&operator<<(std::ostream &os, Animal const &obj )
{
	os << obj.getType() + ":";
	obj.makeSound();
	return (os);
}
