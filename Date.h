/*
 * Date.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef DATE_H_
#define DATE_H_

class date
{
private:
	int day;
	int month;
	int year;
public:
	date();
	date(int ,int, int );
	int get_day();
	void set_day(int);
	int get_month();
	void set_month(int month);
	int get_year();
	void set_year(int year);
	void accept();
	void display();
	bool is_leap_year();
};


#endif /* DATE_H_ */
