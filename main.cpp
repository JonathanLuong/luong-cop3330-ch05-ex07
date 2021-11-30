/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Luong
 */

#include "std_lib_facilities.h"

void calculate(double a, double b, double c) {
	double res1 = ((-1*b) + sqrt((pow(b,2)-(4*a*b)))) / (2*a);
	double res1 = ((-1*b) - sqrt((pow(b,2)-(4*a*b)))) / (2*a);

	cout << "Root 1: " << res1 << "\nRoot 2: " << res2;
}

int main()
{
	double a = 0;
	double b = 0; 
	double c = 0;

	cout << "Enter values for a, b, and c for the quadratic formula\n";
	cin >> a >> b >> c;

	double num1 = convert(d1);
	double num2 = convert(d2);

	while((pow(b,2)-(4*a*b)) < 0 || a == 0) {
		cout << "Reenter values for a, b, and c for the quadratic formula\n";
		cin >> a >> b >> c;
	}

	calculate(a,b,c);

	return 0;
}