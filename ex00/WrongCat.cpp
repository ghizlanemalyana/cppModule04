/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:13:51 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/26 16:01:51 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}
WrongCat::WrongCat(std::string type){
	std::cout << "WrongCat type constructor called" << std::endl;
	this->type = type;
}
WrongCat::WrongCat(const WrongCat &other){
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}
WrongCat &WrongCat::operator=(const WrongCat &other){
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}
WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}
void WrongCat::makeSound() const{
	std::cout << "WrongCat sound" << std::endl;
}
std::string WrongCat::getType() const{
	return this->type;
}