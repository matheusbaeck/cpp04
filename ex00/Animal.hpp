/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/06/12 13:52:03 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H__
# define ANIMAL_H__

# include <iostream>
# include <iomanip>

class Animal
{
	private:
		std::string _name;
	protected:
		void		setName( std::string newName );
	public:
		Animal( void );
		Animal( std::string );
		Animal	&operator=( Animal const &obj );
		~Animal( void );
		void	makeSound( void );
		/*	EXTRA	*/
		std::string	getName( void ) const;
		friend std::ostream	&operator<<( std::ostream &os, Animal const &obj );

};

#endif