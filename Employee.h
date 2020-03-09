/*
 * Manager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include"Date.h"
#include"Person.h"

class Employee: public person
{
private:
	int id;
	float sal;
	string dept;
	date joining_date;
public:
	Employee();
	Employee(string name,string address,int id,float sal,string dept,date b_date,date joining_date);
	int get_id();
	void set_id(int);
	float get_sal();
	void set_sal(float);
	string get_dept();
	void set_dept(string);
	date get_joining_date();
	void set_joining_date(date);
	void accept();
	void display();
};


#endif /* EMPLOYEE_H_ */
