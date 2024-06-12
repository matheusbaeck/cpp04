/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:59:11 by math              #+#    #+#             */
/*   Updated: 2024/06/12 13:59:24 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	Animal human;
	Cat	cat;
	Dog	dog;

	human = Animal("Matheus");
	cat = Cat("Taki");
	dog = Dog("Rex");
	std::cout << std::endl;
	std::cout << human << std::endl;
	human.makeSound();
	std::cout << std::endl;
	std::cout << cat << std::endl;
	cat.makeSound();
	std::cout << std::endl;
	std::cout << dog << std::endl;
	dog.makeSound();
	std::cout << std::endl;
	return (0);
}