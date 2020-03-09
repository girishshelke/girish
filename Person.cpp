/*
 * Person.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
#include<string>
using namespace std;

#include "Person.h"
#include"Date.h"


person::person()
{
	this->name="abc";
	this->address="hinjawadi";
}
person::person(string name,string address,date birth_date)
{
	this->name=name;
	this->address=address;
	this->birth_date=birth_date;
}
string person::get_name()
{
	return this->name;

}
void person::set_name(string name)
{
	this->name=name;
}
string person::get_addr()
{
	return this->address;
}
void person::set_addr(string addresss)
{
	this->address=address;
}
	date person::get_birth_date()
{
		birth_date.display();
}
void person::set_birth_date(date birth_date)
{
	this->birth_date=birth_date;
}
	void person::accept()
{
  cout<<"\n enter the persons details";
  cout<<"enter the name"<<endl;
  cin>>this->name;
  cout<<"\nenter the address"<<endl;
  cin>>this->address;
  birth_date.accept();

}
void person::display()
{
	cout<<"\n persons details are :	";
	cout<<"name:	"<<this->name<<endl;
	cout<<"address: "<<this->address<<endl;
	birth_date.display();

}


