// =================================================================
//
// File: activity.h
// Author:Francisco Couttolenc Ortiz
// Date: 26/08/22
//
// =================================================================


#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <iostream>
using namespace std;

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
	unsigned int sumaIterativa(unsigned int n) {
		int suma;
		for(int i=1;i<=n;i++)
		{
			suma += i;
		}
		return suma;
	}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	int suma;
	if (n == 1) 
	{
		suma = 1;
	}
	else 
	{
		suma = n + sumaRecursiva(n - 1);
	}
	return suma;
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1)
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
  int suma = (n * (n + 1));
	return suma;
}


#endif /* ACTIVITY_H */
