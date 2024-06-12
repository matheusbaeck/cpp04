/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:49:13 by math              #+#    #+#             */
/*   Updated: 2024/06/12 13:51:16 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _name("Animal")
{
	std::cout << "cpy contructor Animal" << std::endl;
}

Animal::Animal( std::string name) : _name(name)
{
	std::cout << "constructor Animal" << std::endl;
}

Animal	&Animal::operator=( Animal const &obj )
{
	this->setName(obj.getName());
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "destructor Animal" << std:: endl;
}

std::string	Animal::getName( void ) const
{
	return (this->_name);
}

void	Animal::setName( std::string newName )
{
	this->_name = newName;
}

void	Animal::makeSound( void )
{
	std::cout << "HEEEY!!!" << std:: endl;
}

std::ostream	&operator<<(std::ostream &os, Animal const &obj )
{
	os << "Animal:" + obj.getName();
	return (os);
}
