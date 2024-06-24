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
	this->_type = "WrongCat";
	std::cout << "cpy contructor WrongCat" << std::endl;
}

WrongCat::WrongCat( std::string type)
{
	this->_type = type;
	std::cout << "constructor WrongCat "<< type << std::endl;
}

WrongCat	&WrongCat::operator=( WrongCat const &obj )
{
	this->_type = obj._type;
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "destructor WrongCat" << std:: endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Muuuh!!!" << std:: endl;
}
