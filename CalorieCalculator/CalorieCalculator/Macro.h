#pragma once
// author: Joseph Vasconcelos // 4/26/2019 //
class Macro
{
private: 
	double weight; // private (in KG)
	double height; // private (in CM)
	int age; // private 
	int calories; // private
	int fat; // private
	int protein; // private
	int carbs; // private
	double activity; // private
public:
	void getCalories();
	int getFat();
	int getProtein();
	int getCarbs();

		
	void BMRmale();
	void BMRfemale();
	
	void setFat();
	void setProtein();
	void setCarbs(int calories, int fat, int protein);
	void setCalories(int cal);
	void setActivity(double activity);



	
	Macro();
	Macro(double weight, double height, int age);

}; // end header


