// CalorieCalculator.cpp : Defines the entry point for the console application.
//
// author: Joseph Vasconcelos // 4/26/2019 //
#include "stdafx.h"
#include "Macro.h"
#include <iostream>
using namespace std;


int main()
{
	double height;
	double weight;
	int age;

	
	cout << "Welcome to Joe's Calories Calculator" << endl;
	cout << "Please enter your weight in KG" << endl;
	cin >> weight;

	cout << "Please enter your height in CM" << endl;
	cin >> height; 

	cout << "Please enter your age" << endl;
	cin >> age;

	Macro macros(weight, height, age);

		
	macros.getCalories();
	system("PAUSE");

    return 0;
}

