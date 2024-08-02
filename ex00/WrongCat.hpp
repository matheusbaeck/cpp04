/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/06/17 12:58:39 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCat_HPP__
# define WRONGCat_HPP__

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( WrongCat const & );
		~WrongCat( void );

		WrongCat	&operator=( WrongCat const &obj );

		virtual void		makeSound( void ) const;
};

#endif