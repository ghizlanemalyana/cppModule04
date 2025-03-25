/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:06:37 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/24 20:11:07 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "WrongAnimal";
}
WrongAnimal::WrongAnimal(std::string type){
	std::cout << "WrongAnimal type constructor called" << std::endl;
	this->type = type;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal sound" << std::endl;
}
std::string WrongAnimal::getType() const{
	return this->type;
}