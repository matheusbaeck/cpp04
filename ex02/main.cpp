/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:59:11 by math              #+#    #+#             */
/*   Updated: 2024/07/26 21:25:17 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{

	//Animal an;
	size_t size = 5;
	const Animal* arr[size];
	
	for (size_t i = 0; i < size; i++)
	{
		if (i < size / 2)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}

	std::cout << std::endl;
	for (size_t i = 0; i < size; i++)
		std::cout << "\t" << *arr[i];
	std::cout << std::endl;

	for (size_t i = 0; i < size; i++)
		delete arr[i];	
	return (0);
}