/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:35:54 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/10 15:41:45 by pablalva         ###   ########.fr       */
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
	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};
std::ostream  &operator<<( std::ostream &, const Fixed &);






#endif