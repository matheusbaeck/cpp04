/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:59:11 by math              #+#    #+#             */
/*   Updated: 2024/07/26 20:34:24 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Cat k;
	Cat l(k);

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k.getType() << " " << std::endl;
	std::cout << l.getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k.makeSound();
	
	std::cout << "\tMy Own Test\t" << std::endl;
	std::cout << *meta << std::endl;
	std::cout << *i << std::endl;
	std::cout << *j << std::endl;
	delete meta;
	delete i;
	delete j;

	/*WRONG ANIMAL*/

	const WrongAnimal* wrong = new WrongAnimal();
	const WrongCat* wrongcat = new WrongCat();

	std::cout << *wrong << std::endl;
	std::cout << *wrongcat << std::endl;
	
	delete wrong;
	delete wrongcat;
	
	return (0);
}