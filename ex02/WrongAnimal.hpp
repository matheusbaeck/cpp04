/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/06/17 14:25:05 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H__
# define WRONGANIMAL_H__

# include <iostream>
# include <iomanip>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & );
		WrongAnimal	&operator=( WrongAnimal const & );
		virtual ~WrongAnimal( void );
		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
};

std::ostream	&operator<<( std::ostream &os, WrongAnimal const &obj );

#endif