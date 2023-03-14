#pragma once
#include "date.h"
class Event {
private:
	Date event_date;
	std::string name;
public:
	Event() {

	}
	Event(Date date,std::string name) {
		this->event_date = date;
		this->name = name;
	}

	Date get_eventTime() {
		return this->event_date;
	}

	void print() {
		std::cout << this->name << " ";
		this->event_date.print();
	}

	void set_date(std::string day,std::string month,std::string year) {
		this->event_date.set_day(day);
		this->event_date.set_month(month);
		this->event_date.set_year(year);

		if (!this->event_date.check()) {
			std::cout << "Data a fost schimbata gresit";
			this->event_date = Date("/", "/", "/");
		}
	}

	std::string getName() {
		return this->name;
	}
};