/*
 * Person.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef PERSON_H_
#define PERSON_H_
#include"Date.h"

class person
{
private:
	string name;
	string address;
	date birth_date;
public:
	person();
	person(string name,string address,date birth_date);
	string get_name();
	void set_name(string);
	string get_addr();
	void set_addr(string);
	date get_birth_date();
	void set_birth_date(date);
	void accept();
	void display();
};

#endif /* PERSON_H_ */
