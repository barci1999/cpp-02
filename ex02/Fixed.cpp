/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:35:51 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/10 18:23:22 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point = 0;
}
Fixed::Fixed( const int nbr )
{
	this->fixed_point = nbr * 256;
}
Fixed::Fixed( const float nbr )
{
	this->fixed_point = roundf(nbr * (1 << n_frac_bits));
}
Fixed::~Fixed()
{
}
Fixed::Fixed(const Fixed& other)
{
	this->fixed_point = other.fixed_point;
}

/* Methods */

int Fixed::getRawBits() const
{
	return(this->fixed_point);
}
void Fixed::setRawBits(int const raw )
{
	this->fixed_point = raw;
}
float Fixed::toFloat( void ) const
{
	return fixed_point / float(1 << n_frac_bits); 
}
int Fixed::toInt() const
{
	return roundf(fixed_point / float(1 << n_frac_bits));
}
Fixed& Fixed::min(Fixed& nbr_1,Fixed& nbr_2)
{
	if(nbr_1.fixed_point < nbr_2.fixed_point)
		return(nbr_1);
	else
		return(nbr_2);
}
Fixed& Fixed::max(Fixed& nbr_1,Fixed& nbr_2)
{
	if(nbr_1.fixed_point > nbr_2.fixed_point)
		return(nbr_1);
	else
		return(nbr_2);
}
	
const Fixed& Fixed::min(const Fixed& nbr_1,const Fixed& nbr_2)
{
	if(nbr_1.getRawBits()<nbr_2.getRawBits())
		return(nbr_1);
	else
		return(nbr_2);
}
const Fixed& Fixed::max(const Fixed& nbr_1,const Fixed& nbr_2)
{
	if(nbr_1.getRawBits() > nbr_2.getRawBits())
		return(nbr_1);
	else
		return(nbr_2);
}

/* Operators */

bool Fixed::operator>(const Fixed& other) const { return this->fixed_point > other.fixed_point; }
bool Fixed::operator<(const Fixed& other) const{ return this->fixed_point < other.fixed_point; }
bool Fixed::operator>=(const Fixed& other) const{ return this->fixed_point >= other.fixed_point; }
bool Fixed::operator<=(const Fixed& other) const{ return this->fixed_point <= other.fixed_point; }
bool Fixed::operator==(const Fixed& other) const{ return this->fixed_point == other.fixed_point; }
bool Fixed::operator!=(const Fixed& other) const{ return this->fixed_point != other.fixed_point; }
	
Fixed Fixed::operator+(const Fixed& other) const{ return Fixed(this->toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed& other) const{ return Fixed(this->toFloat() - other.toFloat()); }
Fixed Fixed::operator*(const Fixed& other) const{ return Fixed(this->toFloat() * other.toFloat()); }
Fixed Fixed::operator/(const Fixed& other) const{ return Fixed(this->toFloat() / other.toFloat()); }
	
Fixed& Fixed::operator++(){	this->fixed_point += 1; return(*this); }
Fixed Fixed::operator++(int){ Fixed temp = *this; this->fixed_point += 1; return(temp);}

Fixed& Fixed::operator--(){ this->fixed_point -= 1; return(*this); }
Fixed Fixed::operator--(int){ Fixed temp = *this; this->fixed_point -= 1; return(temp);}

Fixed& Fixed::operator=(const Fixed& other)
{
	if(this == &other)
		return(*this);
	this->fixed_point = other.fixed_point;
	return(*this);
}
std::ostream  &operator<<( std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}