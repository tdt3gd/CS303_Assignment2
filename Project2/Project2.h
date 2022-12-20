#pragma once
#include <iostream>
#include "Project2.h"

class Employee
{
public:
	Employee() {
		int employee_type = 0;
	}


private:
	double vacation;
	double health_care = 0.00;
	double weekly_salary(double hourly_rate, double hours_worked);


};

class Professional : public Employee
{
public:
	Professional() {}
	double weekly_salary(double annual_pay);
	double wk_sal = annual_pay / 52;

private:
	double annual_pay = 0.00;
	};

class Nonprofessional : public Employee
{
public: 
	double calculate_pay(double hours_worked, double hourly_rate) {
/*		double hours_worked = hours_worked;
		double hourly_rate = hourly_rate;
		double wkly_gross_pay = hours_worked * hourly_rate;
		*/

	};

private:
	double hours_worked;
	double hourly_rate = 0.00;
};

int menu() {
	int user_menu_choice;
	std::cout << "Welcome to the Employee calculator\n";
	std::cout << "Enter 1 - Employee Vacation available\n";
	std::cout << "Enter 2 - Employee weekly pay\n";
	std::cout << "Enter 3 - Employee health care contribution\n";
	std::cout << "\n";
	std::cin >> user_menu_choice;
	return user_menu_choice;
};