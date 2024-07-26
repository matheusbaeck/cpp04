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

#ifndef BRAIN_H__
# define BRAIN_H__

# include <iostream>
# include <iomanip>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain( void );
		Brain( std::string type );
		Brain( Brain const &obj );
		~Brain( void );
		Brain	&operator=( Brain const &obj );
};

#endif