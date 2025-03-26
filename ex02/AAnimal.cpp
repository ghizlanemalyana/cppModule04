/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:38:15 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/25 20:46:04 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}
AAnimal::AAnimal(std::string type){
	std::cout << "Animal constructor called" << std::endl;
	this->type = type;
}
AAnimal::AAnimal(const AAnimal &other){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}
AAnimal &AAnimal::operator=(const AAnimal &other){
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}
AAnimal::~AAnimal(){
	std::cout << "Animal destructor called" << std::endl;
}
std::string AAnimal::getType() const{
	return this->type;
}