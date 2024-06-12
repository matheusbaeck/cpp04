/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:55:07 by math              #+#    #+#             */
/*   Updated: 2024/06/12 13:55:56 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "cpy contructor Dog" << std::endl;
}

Dog::Dog( std::string name)
{
	this->setName(name);
	std::cout << "constructor Dog" << std::endl;
}

Dog	&Dog::operator=( Dog const &obj )
{
	this->setName(obj.getName());
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "destructor Dog" << std:: endl;
}

void	Dog::makeSound( void )
{
	std::cout << "Au!!!" << std:: endl;
}

std::ostream	&operator<<(std::ostream &os, Dog const &obj )
{
	os << "Dog:" + obj.getName();
	return (os);
}