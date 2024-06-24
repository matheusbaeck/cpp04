/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/06/19 17:15:00 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H__
# define ANIMAL_H__

# include <iostream>
# include <iomanip>
# include "Brain.hpp"

class Animal
{
	private:
		Brain	*_brain;
	protected:
		Animal( void );
		Animal( std::string );
		void	newBrain( void );
		void	deleteBrain( void );
		std::string _type;
	public:
		Animal	&operator=( Animal const &obj );
		virtual ~Animal( void );
		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
		/*	EXTRA	*/
		friend std::ostream	&operator<<( std::ostream &os, Animal const &obj );

};

#endif