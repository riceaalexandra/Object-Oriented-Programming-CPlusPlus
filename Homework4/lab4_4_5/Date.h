#pragma once
#include<string>
#include<iostream>


class Date {

private:

	std::string day;
	std::string month;
	std::string year;

	

public:

	Date() {

	}
	Date(std::string day, std::string month, std::string year);
	Date(std::string data);
	Date(int days,std::string year);
	void print();
	bool check();
	void set_day(std::string new_day);
	void set_month(std::string new_month);
	void set_year(std::string new_year);
	std::string get_day() { return this->day; }
	std::string get_month() { return this->month; }
	std::string get_year() { return this->year; }


};