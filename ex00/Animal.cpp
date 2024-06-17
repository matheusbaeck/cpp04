/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:49:13 by math              #+#    #+#             */
/*   Updated: 2024/06/17 12:41:01 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "cpy contructor Animal" << std::endl;
}

Animal::Animal( std::string type) : _type(type)
{
	std::cout << "constructor Animal" << std::endl;
}

Animal	&Animal::operator=( Animal const &obj )
{
	this->_type = obj._type;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "destructor Animal" << std:: endl;
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