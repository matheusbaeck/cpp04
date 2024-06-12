/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/06/12 13:53:46 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H__
# define CAT_H__

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( std::string name );
		Cat	&operator=( Cat const &obj );
		~Cat( void );
		void	makeSound( void );
		/*	EXTRA	*/
		friend std::ostream	&operator<<( std::ostream &os, Cat const &obj );
};

#endif