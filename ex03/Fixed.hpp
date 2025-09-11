/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:35:54 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/11 16:21:29 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int fixed_point;
	static const int n_frac_bits = 8;
public:
	Fixed();
	Fixed( const int nbr );
	Fixed( const float nbr );
	
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed abs() const;
	
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;;
	
	Fixed& operator++();
	Fixed& operator--();
	
	Fixed operator++(int);
	Fixed operator--(int);
	
	static Fixed& min(Fixed& nbr_1,Fixed& nbr_2);
	static Fixed& max(Fixed& nbr_1,Fixed& nbr_2);
	
	static const Fixed& min(const Fixed& nbr_1,const Fixed& nbr_2);
	static const Fixed& max(const Fixed& nbr_1,const Fixed& nbr_2);
};
std::ostream  &operator<<( std::ostream &, const Fixed &);

#endif