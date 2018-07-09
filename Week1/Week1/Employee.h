#pragma once
#include <string>

class Employee
{
public:
	Employee();
	Employee(std::string employee_name, double initial_salary);
	void setSalary(double new_salary);
	double getSalary() const;
	std::string getName() const;
	void print() const;
private:
	std::string name;
	double salary;
};
