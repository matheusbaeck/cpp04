/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/08/02 10:51:22 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP__
# define DOG_HPP__

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( Dog const &);
		~Dog( void );
		
		Dog	&operator=( Dog const & );
		
		virtual void		makeSound( void ) const;
};

#endif