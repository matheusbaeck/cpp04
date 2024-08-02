/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:59:11 by math              #+#    #+#             */
/*   Updated: 2024/08/02 18:14:57 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	size_t size = 4;
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

	std::cout << std::endl << "\tSECOND PART" << std::endl;

	Cat * pet1 = new Cat;
	pet1->getBrain();

	pet1->eureka("Got an idea!!!");
	pet1->tellIdeas();

	Cat * pet2 = new Cat(*pet1);
	pet2->tellIdeas();
	delete pet1;
	pet2->tellIdeas();

	pet2->eureka("Got another idea!!!");
	pet2->tellIdeas();

	Cat * pet3 = new Cat;
	pet3->tellIdeas();
	*pet3 = *pet2;
	pet3->tellIdeas();
	delete pet2;
	pet3->tellIdeas();

	delete pet3;
	return (0);
}