/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:35:40 by math              #+#    #+#             */
/*   Updated: 2024/06/17 12:58:39 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP__
# define BRAIN_HPP__

# include <iostream>
# include <iomanip>

class Brain
{
	private:
		std::string	*_ideas;

	public:
		Brain( void );
		Brain( Brain const &obj );
		~Brain( void );

		Brain	&operator=( Brain const &obj );

		const std::string	&getIdea( int ) const;
		void				setIdea( std::string );
};

#endif