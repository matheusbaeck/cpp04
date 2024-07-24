/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/07/23 20:57:06 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H__
# define ANIMAL_H__

# include <iostream>
# include <iomanip>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal( void );
		Animal( std::string );
		Animal( Animal const &);
		Animal	&operator=( Animal const &obj );
		virtual ~Animal( void );
		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
		/*	EXTRA	*/

};

std::ostream	&operator<<( std::ostream &os, Animal const &obj );

#endif