/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:23:36 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/24 18:22:23 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}
Dog::Dog(const Dog &other){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}
Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}
Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const{
	std::cout << "Woof Woof" << std::endl;
}

std::string Dog::getType() const{
	return this->type;
}