/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/06/18 18:08:55 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H__
# define CAT_H__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( std::string type );
		Cat	&operator=( Cat const &obj );
		~Cat( void );
		void		makeSound( void ) const;
};

#endif