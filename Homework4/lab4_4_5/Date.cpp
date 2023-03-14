#include "date.h"

Date::Date(std::string day,std::string month,std::string year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date(std::string date) {

	this->day = "";
	this->month = "";
	this->year = "";

	int nr = 0;
	for (int i = 0; i < date.size(); i++) {
		if (date[i] == '/')
			nr++;
		else
			if (nr == 0) {

				this->day = this->day + date[i];


			}
			else if (nr == 1) {
				this->month = this->month + date[i];

			}
			else if (nr == 2) {
				this->year = this->year + date[i];
			}

	}
}

Date::Date(int days,std::string year) {
	this->year = year;
	if (days <= 31) {
		this->day =std::to_string(days);
		this->month = "January";
	}
	else if (days <= 59) {
		this->day = std::to_string(days - 31);
		this->month = "February";
	}
	else if (days <= 90) {
		this->day = std::to_string(days - 59);
		this->month = "March";
	}
	else if (days <= 120) {
		this->day = std::to_string(days - 90);
		this->month = "April";
	}
	else if (days <= 151) {
		this->day = std::to_string(days - 120);
		this->month = "May";
	}
	else if (days <= 181) {
		this->day = std::to_string(days - 151);
		this->month = "June";
	}
	else if (days <= 212) {
		this->day = std::to_string(days - 181);
		this->month = "July";
	}
	else if (days <= 242) {
		this->day = std::to_string(days - 212);
		this->month = "August";
	}
	else if (days <= 272) {
		this->day = std::to_string(days - 242);
		this->month = "September";
	}
	else if (days <= 303) {
		this->day = std::to_string(days - 272);
		this->month = "October";
	}
	else if (days <= 333) {
		this->day = std::to_string(days - 303);
		this->month = "November";
	}
	else if (days <= 364) {
		this->day = std::to_string(days - 333);
		this->month = "December";
	}
}

void Date::print() {
	std::cout << this->day << "/" << this->month << "/" << this->year << "\n";
}

bool Date::check() {
	int day = stoi( this->day);
	int year = stoi(this->year);

	if (day <= 0 || day > 31)
		return false;

	if (year <= 0 || year >= 2022) {
		return false;
	}

	std::string months_vec[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	for (int i = 0; i < 12; i++) {
		if (months_vec[i] == this->month)
			return true;
	}
	return false;
}

void Date::set_day(std::string new_day) {
	this->day = new_day;
}
void Date::set_month(std::string new_month) {
	this->month = new_month;
}
void Date::set_year(std::string new_year) {
	this->year = new_year;
}