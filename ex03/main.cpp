/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:28:48 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/11 16:42:23 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"
#include"Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point const a;
	Point const b(4,0);
	Point const c(0,3);
	Point const comprove(1,1);
	bsp(a,b,c,comprove);
	return(0);
}