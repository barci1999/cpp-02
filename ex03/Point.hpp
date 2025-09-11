/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:28:54 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/11 16:29:32 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
class Point
{
private:
	Fixed const x;
	Fixed const y;
public:

	Point();
	Point(float x,float y);
	Point(const Point& other);
	Point& operator=(const Point& other);
	~Point();
	Fixed getX () const;
	Fixed getY () const;
	

	
	
	
	
};

#endif


