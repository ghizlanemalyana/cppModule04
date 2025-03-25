/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:04:28 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/24 18:21:45 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}
Cat::Cat(std::string type){
	std::cout << "Cat constructor called" << std::endl;
	this->type = type;
}
Cat::Cat(const Cat &other) : Animal(other){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}
Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}
Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const{
	std::cout << "Meaw Meaw" << std::endl;
}

std::string Cat::getType() const{
	return this->type;
}
