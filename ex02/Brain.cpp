/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:30:43 by math              #+#    #+#             */
/*   Updated: 2024/06/17 12:58:25 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "std contructor Brain" << std::endl;
}

Brain::Brain( std::string type)
{
	std::cout << "constructor Brain "<< type << std::endl;
}

Brain::Brain( Brain const &other )
{
	std::cout << "cpy contructor Brain" << std::endl;
	*this = other;
}

Brain	&Brain::operator=( Brain const &obj )
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = obj._ideas[i];
	}
	
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "destructor Brain" << std:: endl;
}

