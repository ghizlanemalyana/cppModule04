/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:51:51 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/24 22:42:17 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	brain = new Brain();
}
Dog::Dog(std::string type){
	std::cout << "Dog constructor called" << std::endl;
	this->type = type;
	brain = new Brain();
}
Dog::Dog(const Dog &other){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}
Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}
Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}
void Dog::makeSound() const{
	std::cout << "Woof Woof" << std::endl;
}

std::string Dog::getType() const{
	return this->type;
}