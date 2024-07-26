/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/07/26 20:51:42 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H__
# define DOG_H__

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog	&operator=( Dog const & );
		~Dog( void );
		virtual void		makeSound( void ) const;
};

std::ostream	&operator<<( std::ostream &os, Dog const &obj );

#endif