/*
 * Manager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */
#include<iostream>
#include<string>
using namespace std;

#include "Employee.h"
#include"Date.h"
#include"Person.h"


Employee::Employee()
{
	this->id=0;
	this->sal=0;
	this->dept="GIRISH";

}
//Employee::Employee(string name,string address,date birth_date ,int id,float sal,string dept,int day,int month,int year):person(name ,address,birth_date),joining_date(day,month,year)
//{
//	this->id=id;
//	this->sal=sal;
//	this->dept=dept;
//}

Employee::Employee(string name,string address,int id,float sal,string dept,date b_date,date joining_date):person(name,address,b_date)
{
		this->id=id;
		this->sal=sal;
		this->dept=dept;

		this->joining_date=joining_date;
}
int Employee::get_id()
{
	return this->id;

}

void Employee::set_id(int id)
{
	this->id=id;
}
float Employee::get_sal()
{
	return this->sal;
}
void Employee::set_sal(float sal)
{
	this->sal=sal;
}

string Employee::get_dept()
{
	return this->dept;
}
void Employee::set_dept(string dept)
{
	this->dept=dept;
}
date Employee::get_joining_date()
{
	return this->joining_date;
}
void Employee::set_joining_date(date joining_date)
{
	this->joining_date=joining_date;
}

void Employee::accept()
{
	person::accept();
	cout<<"\nenter the id";
	cin>>this->id;
	cout<<"\n enter the sal";
	cin>>this->sal;
	cout<<"\n enter the dept";
	cin>>this->dept;
	joining_date.accept();
}
void Employee::display()
{
	cout<<"details is "<<endl;
	person::display();
	cout<<"id:"<<this->id<<endl;
	cout<<"sal:"<<this->sal<<endl;
	cout<<"dept:"<<this->dept<<endl;

	joining_date.display();
}


