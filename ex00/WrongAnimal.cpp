/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:49:13 by math              #+#    #+#             */
/*   Updated: 2024/06/17 12:41:01 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << "cpy contructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type) : _type(type)
{
	std::cout << "constructor WrongAnimal" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &obj )
{
	this->_type = obj._type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "destructor WrongAnimal" << std:: endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "!!!YEEEH" << std:: endl;
}

std::ostream	&operator<<(std::ostream &os, WrongAnimal const &obj )
{
	os << obj.getType() + ":";
	obj.makeSound();
	return (os);
}
