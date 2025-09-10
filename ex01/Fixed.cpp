/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:35:51 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/10 16:22:28 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed( const int nbr )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = nbr * 256;
}
Fixed::Fixed( const float nbr )
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(nbr * (1 << n_frac_bits));
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed& other)
{
	this->fixed_point = other.fixed_point;
	std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this == &other)
		return(*this);
	this->fixed_point = other.fixed_point;
	return(*this);
}
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed_point);
}
void Fixed::setRawBits(int const raw )
{
	this->fixed_point = raw;
}
std::ostream  &operator<<( std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
float Fixed::toFloat( void ) const
{
	return fixed_point / float(1 << n_frac_bits); 
}
int Fixed::toInt() const
{
	return roundf(fixed_point / float(1 << n_frac_bits));
}