/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:35:54 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/10 15:18:25 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
private:
	int fixed_point;
	static const int n_frac_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};







#endif