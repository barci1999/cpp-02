/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:28:51 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/11 16:41:20 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}
Point::Point(float x_val ,float y_val) : x(Fixed(x_val)), y(Fixed(y_val))
{
}
Point::Point(const Point& other): x(other.x), y(other.y)
{
}

Point& Point::operator=(const Point& other)
{
	(void)other;
	return *this;
}

Point::~Point()
{
}
Fixed Point::getX() const
{
	return(this->x);
}
Fixed Point::getY() const
{
	return(this->y);
}