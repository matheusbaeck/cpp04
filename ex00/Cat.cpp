/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/06/12 13:51:51 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "cpy contructor Cat" << std::endl;
}

Cat::Cat( std::string name)
{
	this->setName(name);
	std::cout << "constructor Cat" << std::endl;
}

Cat	&Cat::operator=( Cat const &obj )
{
	this->setName(obj.getName());
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "destructor Cat" << std:: endl;
}

void	Cat::makeSound( void )
{
	std::cout << "Miau!!!" << std:: endl;
}

std::ostream	&operator<<(std::ostream &os, Cat const &obj )
{
	os << "Cat:" + obj.getName();
	return (os);
}
