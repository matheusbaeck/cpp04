/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/08/02 11:44:41 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP__
# define ANIMAL_HPP__

# include <iostream>
# include <iomanip>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal( void );
		Animal( Animal const &);
		virtual ~Animal( void );

		Animal	&operator=( Animal const & );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
};

std::ostream	&operator<<( std::ostream &os, Animal const &obj );

#endif