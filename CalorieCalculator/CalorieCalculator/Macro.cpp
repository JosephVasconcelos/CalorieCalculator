// author: Joseph Vasconcelos // 4/26/2019 //

#include "stdafx.h"
#include "Macro.h"
#include <iostream>
using namespace std;


Macro::Macro()
{
	double weight = 0.0;
	double height = 0.0;
	int age = 0;
};
Macro::Macro(double iweight, double iheight, int iage)
{
	weight = iweight;
	height = iheight;
	age = iage;
};
void Macro::BMRmale()
{
	double bmr = 66.5 + (13.8 * weight)+ (5 * height) - (6 * age); 
	double activity; 
	char choice;
	cout << "Are you sedentary (A), active(B), or intense(C): " << endl;
	cin >> choice;
	switch (choice)
	{
	case 'A': activity = bmr * 1.2;
		cout << "Calories: " << activity << endl;;
		break;
	case 'B': activity = bmr * 1.3;
		cout << "Calories: " << activity << endl;
		break;
	case 'C': activity = bmr * 1.4;
		cout << "Calories: " << activity << endl;
		break;
	default: activity = bmr * 1.2;
		cout << "Calories: " << activity << endl;
		break;
	}
	setActivity(activity);
};
void Macro::BMRfemale()
{
	double bmr = 66.5 + (13.8 * weight) + (5 * height) - (4.7 * age);
	double activity;
	char choice;
	cout << "Are you sedentary (A), active(B), or intense(C): " << endl;
	cin >> choice;
	switch (choice)
	{
	case 'A': activity = bmr * 1.2;
		cout << "Calories: " << activity << endl;;
		break;
	case 'B': activity = bmr * 1.3;
		cout << "Calories: " << activity << endl;
		break;
	case 'C': activity = bmr * 1.4;
		cout << "Calories: " << activity << endl;
		break;
	default: activity = bmr * 1.2;
		cout << "Calories: " << activity << endl;
		break;
	}
	setActivity(activity);
};
void Macro::setActivity(double iactivity)
{
	activity = iactivity;
};
int Macro::getFat()
{
	return fat;
};
int Macro::getProtein()
{	
	return protein;
};
int Macro::getCarbs()
{
	return carbs;
};
void Macro::setFat()
{
	double weightInLB = weight * 2.2;
	fat = weightInLB * 0.35;
};
void Macro::setProtein()
{
	protein = weight * 2.2;
};
void Macro::setCarbs(int calories, int fat, int protein)
{
	int fatcals = fat * 9;
	int procals = protein * 4;
	int profatcals = fatcals + procals;

	carbs = (calories - profatcals) / 4;
	
};
void Macro::setCalories(int cal)
{
	calories = cal;
};
void Macro::getCalories()
{
	char choice;
	char choice2;
	int cal;
	cout << "Are you male(A) or female(B)" << endl;
	cin >> choice;
	switch (choice)
	{
	case 'A': BMRmale();
		break;
	case 'B': BMRfemale();
		break;
	default: BMRmale();
		break;
	}
	
	cout << "Would you like to lose weight(A) or gain weight(B): " << endl;
	cin >> choice2;
	switch (choice2)
	{
	case 'A': cal = activity - 700;
		cout << "Your Calories Are: " << cal << endl;
		break;
	case 'B': cal = activity + 300;
		cout << "Your Calories Are: " << cal << endl;
		break;
	default: BMRmale();
		break;
	}
	setCalories(cal);
	cout << "Macro Breakdown: " << endl;
	setFat();
	cout << "Fat (g): " << getFat() << endl;
	setProtein();
	cout << "Protien (g): " << getProtein() << endl;
	setCarbs(cal, fat, protein);
	cout << "Carbs (g): " << getCarbs() << endl;

};