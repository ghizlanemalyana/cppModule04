/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:35:12 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/24 18:21:53 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}
Animal::Animal(std::string type){
	std::cout << "Animal constructor called" << std::endl;
	this->type = type;
}
Animal::Animal(const Animal &other){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}
Animal &Animal::operator=(const Animal &other){
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}
Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}
void Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}
std::string Animal::getType() const{
	return this->type;
}