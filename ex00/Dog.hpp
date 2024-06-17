/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/06/17 12:51:03 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H__
# define DOG_H__

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( std::string type );
		Dog	&operator=( Dog const &obj );
		~Dog( void );
		void		makeSound( void ) const;
		/*	EXTRA	*/
		friend std::ostream	&operator<<( std::ostream &os, Dog const &obj );
};

#endif