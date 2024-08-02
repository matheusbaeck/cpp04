/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:59:11 by math              #+#    #+#             */
/*   Updated: 2024/08/02 10:59:20 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	std::cout << std::endl << "\tSubject Test\t" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	delete meta;
	delete i;
	delete j;
	
	std::cout << std::endl << "\tMy Own Test\t" << std::endl;
	
	Cat k;
	Cat l(k);
	std::cout << k;

	std::cout << std::endl << "\tWrongClass Test\t" << std::endl;
	
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongCat* wrongcat = new WrongCat();

	std::cout << *wrong;
	std::cout << *wrongcat;
	
	delete wrong;
	delete wrongcat;
	
	return (0);
}