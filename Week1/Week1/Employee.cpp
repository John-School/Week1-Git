#include <string>
#include <iostream>

#include "stdafx.h"
#include "Employee.h"

Employee::Employee()
{
	salary = 0;
}
Employee::Employee(std::string employee_name, double initial_salary)
{
	name = employee_name;
	salary = initial_salary;
}
void Employee::setSalary(double new_salary)
{
	salary = new_salary;
}
double Employee::getSalary() const
{
	return salary;
}
std::string Employee::getName() const
{
	return name;
}
void Employee::print() const
{
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++\n";
	std::cout << "Name: " << name << std::endl;
	std::cout << "Salary: " << salary << std::endl;
}