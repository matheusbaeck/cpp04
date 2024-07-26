/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/06/17 12:58:25 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "std contructor WrongCat" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const &other ) : WrongAnimal()
{
	std::cout << "cpy contructor WrongCat" << std::endl;
	*this = other;
}

WrongCat::~WrongCat( void )
{
	std::cout << "destructor WrongCat" << std:: endl;
}

WrongCat	&WrongCat::operator=( WrongCat const &obj )
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Muuuh!!!" << std:: endl;
}
