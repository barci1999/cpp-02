/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:28:44 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/11 16:42:35 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

Fixed TriangleArea(Point const p1, Point const p2, Point const p3)
{
    return (p1.getX() * (p2.getY() - p3.getY()) +
            p2.getX() * (p3.getY() - p1.getY()) +
            p3.getX() * (p1.getY() - p2.getY())).abs() / Fixed(2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area_ABC = TriangleArea(a,b,c);
	Fixed area_ABP = TriangleArea(a,b,point);
	Fixed area_BCP = TriangleArea(b,c,point);
	Fixed area_CAP = TriangleArea(c,a,point);
	
	if(area_ABP == Fixed(0) || area_BCP == Fixed(0) || area_CAP == Fixed(0))
	{
		std::cout << "The point is on a vertex or on the edges of the triangle." << std::endl;
		return(false);
	}
	else if (area_ABP + area_BCP + area_CAP == area_ABC)
	{
		std::cout << "The point is on the triangle area." << std::endl;
		return(true);
	}
	else
	{
		std::cout << "The point is out of the triangle area." << std::endl;
		return(false);
	}
	
}