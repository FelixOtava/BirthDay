#include "B_Day.h"

B_Day::B_Day(int day, std::string month, int year): m_year(year),m_month(month),m_day(day)
{}
void B_Day::getB_Day() {
	std::cout << "The person is born in: " << m_day << "/" << m_month << "/" << m_year << std::endl;
}
B_Day::~B_Day() {}

int B_Day::getYear() {
	return m_year;
}
int B_Day::getDay() {
	return m_day;
}
int B_Day::convertMonth() {
	int monthInt;
	if (m_month == "January"|| m_month == "january") {
		monthInt = 1;
		return monthInt;
	}
	else if (m_month == "February"||m_month == "february") {
		monthInt = 2;
		return monthInt;
	}
	else if (m_month == "March" || m_month == "march") {
		monthInt = 3;
		return monthInt;
	}
	else if (m_month == "April" || m_month == "april") {
		monthInt = 4;
		return monthInt;
	}
	else if (m_month == "May" || m_month == "may") {
		monthInt = 5;
		return monthInt;
	}
	else if (m_month == "June" || m_month == "june") {
		monthInt = 6;
		return monthInt;
	}
	else if (m_month == "July" || m_month == "july") {
		monthInt = 7;
		return monthInt;
	}
	else if (m_month == "August" || m_month == "august") {
		monthInt = 8;
		return monthInt;
	}
	else if (m_month == "September" || m_month == "september") {
		monthInt = 9;
		return monthInt;
	}
	else if (m_month == "October" || m_month == "october") {
		monthInt = 10;
		return monthInt;
	}
	else if (m_month == "November" || m_month == "november") {
		monthInt = 11;
		return monthInt;
	}
	else if (m_month == "December" || m_month == "december") {
		monthInt = 12;
		return monthInt;
	}
}

