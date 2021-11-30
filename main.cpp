/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Luong
 */

#include "std_lib_facilities.h"


// With constant values, you cannot change its values
void constAdd(const int num1, const int num2) {
	num1 = num1 + 5;
	int res = num1 + num2;

	cout << "Const addition result: " << res << "\n";
}

void add(int num1, int num2) {
	num1 = num1 + 5;
	int res = num1 + num2;

	cout << "Not const addition result: " << res << "\n";
}


int main()
{
	int num1 = 0, num2 = 0;
	cout << "Enter two numbers to add: ";

	cin >> num1 >> num2;

	constAdd(num1, num2);
	add(num1, num2);

	return 0;
}