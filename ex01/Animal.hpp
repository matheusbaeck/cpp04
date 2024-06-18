/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/06/18 18:50:33 by math             ###   ########.fr       */
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
		void	newBrain( void );
		void	deleteBrain( void );
		std::string _type;
	public:
		Animal( void );
		Animal( std::string );
		Animal	&operator=( Animal const &obj );
		virtual ~Animal( void );
		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
		/*	EXTRA	*/
		friend std::ostream	&operator<<( std::ostream &os, Animal const &obj );

};

#endif