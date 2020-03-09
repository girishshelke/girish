/*
 * Date.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
using namespace std;
#include<string>

#include "Date.h"

date::date()
{
	this->day=0;
	this->month=0;
	this->year=0;
}

date::date(int day,int month,int year)
{
	this->day=day;
	this->month=month;
	this->year=year;
}
int date::get_day()
{
	return this->day;
}
void date:: set_day(int day)
{
	this->day=day;
}
int  date::get_month()
{
	return this->month;

}
void date::set_month(int month)
{
	this->month=month;

}
int date::get_year()
{
	return this->year;
}
void date::set_year(int year)
{
	this->year=year;

}
void date::accept()
{
	cout<<"\nenter the date";
	cin>>this->day;
	cout<<"\nenter the month";
	cin>>this->month;
	cout<<"\nenter the year";
	cin>>this->year;
}
void date::display()
{
	cout<<"\n date is :)";
	cout<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
}
bool date::is_leap_year()
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


